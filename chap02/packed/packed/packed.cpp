#include <Windows.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc < 2){
		fprintf(stderr, "$packed.exe <password>\n");
		return 1;
	}
	if(IsDebuggerPresent()){
		// �f�o�b�K��œ��삵�Ă���
		printf("on debugger\n");
		return -1;
	}else{
		// �f�o�b�K��œ��삵�Ă��Ȃ�
		if(strcmp(argv[1], "unpacking") == 0){
			printf("correct!\n");
		}else{
			printf("auth error\n");
			return -1;
		}
	}
	getchar();
	return 0;
}