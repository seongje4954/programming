/* 파일명: assignment18.c

    * 내용: 음원 사이트의 플레이리스트 기능을 구현하려고 한다. 이미 등록된
 SONG 구조체 배열리 있을 때. 전체 곡 목록을 보여주고 사용자로부터 플레이리스트 추가할 노래를 번호로 선택하게 한다. 
 플레이리시트에 노래를 추가할 때마다 플레이리스트의 곡 목록과 전체 재생 시간이 얼마인지를 출력한다
 플레이리스트에는 최대 5곡만 등록할 수 있다

    * 작성자: 홍성제

    * 날짜: 2025.06.07.

    * 버전: v1.0

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
    printf(" 제목\t아티스트\t장르\t재생시간\n");
    for (int i = 0; i < size; i++) {
        printf("%d:%s\t%s\t\t%s\t%d초\n", i + 1, songs[i].title, songs[i].artist, songs[i].genre, songs[i].playtime);
    }
}

int getSongSelection() {
    int n;
    printf("\n플레이리스트에 추가할 곡 번호? ");
    scanf("%d", &n);
    return n;
}

void addToPlaylist(struct SONG* playlist[], struct SONG* songs, int songIndex, int* playlistCount) {
    playlist[*playlistCount] = &songs[songIndex - 1];
    (*playlistCount)++;
}

void displayPlaylist(struct SONG* playlist[], int playlistCount) {
    int totalPlaytime = 0;
    printf("<< 플레이리스트 >>\n");
    for (int i = 0; i < playlistCount; i++) {
        printf("%s\t%s\t\t%s\t%d초\n", playlist[i]->title, playlist[i]->artist, playlist[i]->genre, playlist[i]->playtime);
        totalPlaytime += playlist[i]->playtime;
    }
    printf("총 재생시간: %d초\n", totalPlaytime);
}

int main(void) {
    struct SONG songs[8] = {
        {"Rain", "SNO", "HIP_HOP", 243},
        {"TT", "TWICE", "DANCE", 213},
        {"Awake", "BTS", "HIP_HOP", 226},
        {"봄비", "장범준", "BALLAD", 181},
        {"BIB", "AC/DC", "ROCK", 255},
        {"봄날", "BTS", "HIP_HOP", 278},
        {"아낙", "BTS", "HIP_HOP", 241},
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
            printf("잘못된 곡 번호입니다.\n");
            continue;
        }

        addToPlaylist(playlist, songs, songIndex, &playlistCount);
        displayPlaylist(playlist, playlistCount);
    }

    return 0;
}
