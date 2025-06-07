/* ���ϸ�: assignment18.c

    * ����: ���� ����Ʈ�� �÷��̸���Ʈ ����� �����Ϸ��� �Ѵ�. �̹� ��ϵ�
 SONG ����ü �迭�� ���� ��. ��ü �� ����� �����ְ� ����ڷκ��� �÷��̸���Ʈ �߰��� �뷡�� ��ȣ�� �����ϰ� �Ѵ�. 
 �÷��̸���Ʈ�� �뷡�� �߰��� ������ �÷��̸���Ʈ�� �� ��ϰ� ��ü ��� �ð��� �������� ����Ѵ�
 �÷��̸���Ʈ���� �ִ� 5� ����� �� �ִ�

    * �ۼ���: ȫ����

    * ��¥: 2025.06.07.

    * ����: v1.0

    */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SONG {
    char title[30];
    char artist[30];
    char genre[30];
    int playtime;
};

void printSongList(struct SONG* songs, int size) {
    printf(" ����\t��Ƽ��Ʈ\t�帣\t����ð�\n");
    for (int i = 0; i < size; i++) {
        printf("%d:%s\t%s\t\t%s\t%d��\n", i + 1, songs[i].title, songs[i].artist, songs[i].genre, songs[i].playtime);
    }
}

int getSongSelection() {
    int n;
    printf("\n�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
    scanf("%d", &n);
    return n;
}

void addToPlaylist(struct SONG* playlist[], struct SONG* songs, int songIndex, int* playlistCount) {
    playlist[*playlistCount] = &songs[songIndex - 1];
    (*playlistCount)++;
}

void displayPlaylist(struct SONG* playlist[], int playlistCount) {
    int totalPlaytime = 0;
    printf("<< �÷��̸���Ʈ >>\n");
    for (int i = 0; i < playlistCount; i++) {
        printf("%s\t%s\t\t%s\t%d��\n", playlist[i]->title, playlist[i]->artist, playlist[i]->genre, playlist[i]->playtime);
        totalPlaytime += playlist[i]->playtime;
    }
    printf("�� ����ð�: %d��\n", totalPlaytime);
}

int main(void) {
    struct SONG songs[8] = {
        {"Rain", "SNO", "HIP_HOP", 243},
        {"TT", "TWICE", "DANCE", 213},
        {"Awake", "BTS", "HIP_HOP", 226},
        {"����", "�����", "BALLAD", 181},
        {"BIB", "AC/DC", "ROCK", 255},
        {"����", "BTS", "HIP_HOP", 278},
        {"�Ƴ�", "BTS", "HIP_HOP", 241},
        {"NAPA", "Miwa", "OST", 281}
    };

    struct SONG* playlist[5] = { NULL };
    int playlistCount = 0;

    printSongList(songs, 8);

    while (1) {
        int songIndex = getSongSelection();
        if (songIndex == 0) {
            break;
        }
        if (songIndex < 1 || songIndex > 8) {
            printf("�߸��� �� ��ȣ�Դϴ�.\n");
            continue;
        }

        addToPlaylist(playlist, songs, songIndex, &playlistCount);
        displayPlaylist(playlist, playlistCount);
    }

    return 0;
}
