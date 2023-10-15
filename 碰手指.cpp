#include<stdio.h>

struct Snark {
	int length; //身体长度
	int speed; //移动速度
};

int main() {
	printf("改编自同名游戏“碰手指”（初中时课间和同学打法时间的游戏）\n");
	printf("游戏规则\n玩家通过1，2，3，4代表的A方左右手与B方左右手进行对战（A方左手为1右手为2，B方左手为3，右手为4）\n");
	printf("由不同数字组成的单手手势构成不同的效果\n5为护盾，抵挡一点伤害，6为回血HP+1，7~8为枪，造成一点伤害");
	printf("当左右手为特点数字时触发组合技\n双手都为五时造成一点伤害，护盾+1\n当双手为9和10时触发技能手榴弹，造成3点伤害\n");
	printf("操作说明\n1~3为A与B的左手，2~4为A与B的右手。如A操作左手碰B的右手时为：1空格4回车\n");
	printf("如有bag请反馈作者\n\n\n");
	int A, B, a, b, a1, a2, b1, b2, c1, c2;
	A = 5, B = 5, a = 0, b = 0, c1 = 0, c2 = 0;
	a1 = 1, a2 = 1, b1 = 1, b2 = 1;
	while (A > 0 && B > 0) {
		printf("A操作\n");
		scanf("%d %d", &a, &b);
		if (a == 1 && b == 3) {
			a1 = a1 + b1;
		} else if (a == 1 && b == 4) {
			a1 = a1 + b2;
		} else if (a == 2 && b == 3) {
			a2 = a2 + b1;
		} else if (a == 2 && b == 4) {
			a2 = a2 + b2;
		} else {
			printf("错误输入");
		}
		if (a1 > 10) {
			a1 = a1 - 10;
		}
		if (a2 > 10) {
			a2 = a2 - 10;
		}
		a = 0, b = 0;
		if (a1 == 5) {
			c1++;
		}
		if (a1 == 6) {
			A++;
		}
		if (a1 == 7) {
			B--;
		}
		if (a1 == 8) {
			B--;
		}
		if (a2 == 5) {
			c1++;
		}
		if (a2 == 6) {
			A++;
		}
		if (a2 == 7) {
			B--;
		}
		if (a2 == 8) {
			B--;
		}
		if (a1 == 5 && a2 == 5) {
			c1++;
			B--;
		}
		if (a1 == 9 && a2 == 10) {
			B = B - 3;
		}
		if (a2 == 9 && a1 == 10) {
			B = B - 3;
		}
		printf("AHP剩余%d,BHP剩余%d\n", A, B);
		printf("A的左手为%d,A的右手为%d\n", a1, a2);
		printf("B操作");
		scanf("%d %d", &a, &b);
		if (a == 1 && b == 3) {
			b1 = a1 + b1;
		} else if (a == 1 && b == 4) {
			b1 = a1 + b2;
		} else if (a == 2 && b == 3) {
			b2 = a2 + b1;
		} else if (a == 2 && b == 4) {
			b2 = a2 + b2;
		} else printf("错误输入");
		if (b1 > 10) {
			b1 = b1 - 10;
		}
		if (b2 > 10) {
			b2 = b2 - 10;
		}
		a = 0, b = 0;
		if (b1 == 5) {
			c2++;
		}
		if (b1 == 6) {
			B++;
		}
		if (b1 == 7) {
			A--;
		}
		if (b1 == 8) {
			A--;
		}
		if (b2 == 5) {
			c2++;
		}
		if (b2 == 6) {
			B++;
		}
		if (b2 == 7) {
			A--;
		}
		if (b2 == 8) {
			A--;
		}
		if (b1 == 5 && b2 == 5) {
			c2++;
			A--;
		}
		if (b1 == 9 && b2 == 10) {
			A = A - 3;
		}
		if (b2 == 9 && b1 == 10) {
			A = A - 3;
		}
		printf("AHP剩余%d,BHP剩余%d\n", A, B);
		printf("B的左手为%d,B的右手为%d\n", b1, b2);
	}
}
