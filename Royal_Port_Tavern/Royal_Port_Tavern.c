#define _CRT_SECURE_NO_WARNINGS  // 关掉微软的安全警告
#include <stdio.h>      // 包含标准输入输出库，用于printf和scanf
#include <stdlib.h>     // 包含标准库，用于rand()和srand()
#include <time.h>       // 包含时间库，用于time()函数生成随机种子

int main() {
    // ===== 变量声明 =====
    int money = 30;            // 当前持有的西班牙银元（SP），初始30枚
    int totalSpent = 0;        // 累计消费总额，用于账单统计
    int health = 50;           // 健康值，范围0~100，初始50
    int intelligence = 50;     // 智力值，范围0~100，初始50
    int reputation = 50;       // 声望值，范围0~100，初始50
    int luck = 50;             // 运气值，范围0~100，初始50

    int choice;                // 主菜单选项编号
    int subChoice;             // 子菜单（食物/酒水）选项编号
    int bet;                   // 赌博下注金额
    int dice1, dice2;          // 两个骰子的点数
    int sum;                   // 骰子总和
    int winFlag;               // 赌博输赢标记（1赢，0输）
    int temp;                  // 临时变量，用于随机判断或交换

    // 初始化随机数生成器，使用当前时间作为种子，使每次运行结果不同
    srand((unsigned int)time(0));

    // 打印游戏开场白
    printf("Welcome to the Royal Port Tavern, Navigator!\n");
    printf("You have 30 silver pieces (SP) and your stats:\n");
    printf("Health: %d, Intelligence: %d, Reputation: %d, Luck: %d\n",
        health, intelligence, reputation, luck);
    printf("Let's begin your night in the tavern.\n\n");

    // ===== 主循环：一直运行直到用户选择离开（14） =====
    while (1) {
        // 显示主菜单
        printf("\n========== MAIN MENU ==========\n");
        printf("1. Order food\n");
        printf("2. Order drink\n");
        printf("3. Gamble (dice game)\n");
        printf("4. Buy information\n");
        printf("5. Arm wrestling\n");
        printf("6. Buy a round for the tavern\n");
        printf("7. Give to a beggar\n");
        printf("8. Work odd jobs\n");
        printf("9. Sell sailing knowledge\n");
        printf("10. Write letters for sailors\n");
        printf("11. Deliver messages\n");
        printf("12. Tell fortunes\n");
        printf("13. Check status and bill\n");
        printf("14. Leave tavern\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);   // 读取用户输入的数字

        // 使用switch分支处理用户选择
        switch (choice) {

            // ----- 1. 点餐（食物） -----
        case 1:
            printf("\n--- Food Menu ---\n");
            printf("1. Salt beef (3 SP) - health +15\n");
            printf("2. Hard bread (1 SP) - health +5\n");
            printf("3. Fish stew (2 SP) - health +8\n");
            printf("4. Citrus fruit (1 SP) - health +10 (prevents scurvy)\n");
            printf("Select food (1-4): ");
            scanf("%d", &subChoice);
            // 根据子选项执行不同操作
            if (subChoice == 1) {
                if (money >= 3) {          // 检查余额是否足够
                    money -= 3;
                    totalSpent += 3;
                    health += 15;
                    if (health > 100) health = 100;  // 上限100
                    printf("You ate salt beef. Health +15.\n");
                }
                else {
                    printf("Not enough SP!\n");
                }
            }
            else if (subChoice == 2) {
                if (money >= 1) {
                    money -= 1;
                    totalSpent += 1;
                    health += 5;
                    if (health > 100) health = 100;
                    printf("You ate hard bread. Health +5.\n");
                }
                else {
                    printf("Not enough SP!\n");
                }
            }
            else if (subChoice == 3) {
                if (money >= 2) {
                    money -= 2;
                    totalSpent += 2;
                    health += 8;
                    if (health > 100) health = 100;
                    printf("You ate fish stew. Health +8.\n");
                }
                else {
                    printf("Not enough SP!\n");
                }
            }
            else if (subChoice == 4) {
                if (money >= 1) {
                    money -= 1;
                    totalSpent += 1;
                    health += 10;
                    if (health > 100) health = 100;
                    printf("You ate citrus fruit. Health +10 (no scurvy!).\n");
                }
                else {
                    printf("Not enough SP!\n");
                }
            }
            else {
                printf("Invalid food choice.\n");
            }
            break;

            // ----- 2. 点饮品 -----
        case 2:
            printf("\n--- Drink Menu ---\n");
            printf("1. Rum (2 SP) - health -5, reputation +5\n");
            printf("2. Ale (1 SP) - health -2, reputation +2\n");
            printf("3. Wine (4 SP) - health -3, reputation +8\n");
            printf("Select drink (1-3): ");
            scanf("%d", &subChoice);
            if (subChoice == 1) {
                if (money >= 2) {
                    money -= 2;
                    totalSpent += 2;
                    health -= 5;
                    reputation += 5;
                    // 边界处理：确保不超出0~100
                    if (health < 0) health = 0;
                    if (reputation > 100) reputation = 100;
                    printf("You drank rum. Health -5, Reputation +5.\n");
                }
                else {
                    printf("Not enough SP!\n");
                }
            }
            else if (subChoice == 2) {
                if (money >= 1) {
                    money -= 1;
                    totalSpent += 1;
                    health -= 2;
                    reputation += 2;
                    if (health < 0) health = 0;
                    if (reputation > 100) reputation = 100;
                    printf("You drank ale. Health -2, Reputation +2.\n");
                }
                else {
                    printf("Not enough SP!\n");
                }
            }
            else if (subChoice == 3) {
                if (money >= 4) {
                    money -= 4;
                    totalSpent += 4;
                    health -= 3;
                    reputation += 8;
                    if (health < 0) health = 0;
                    if (reputation > 100) reputation = 100;
                    printf("You drank wine. Health -3, Reputation +8.\n");
                }
                else {
                    printf("Not enough SP!\n");
                }
            }
            else {
                printf("Invalid drink choice.\n");
            }
            break;

            // ----- 3. 赌博（骰子游戏） -----
        case 3:
            printf("You have %d SP. Enter your bet (at least 1 SP): ", money);
            scanf("%d", &bet);
            // 检查下注是否合法
            if (bet < 1 || bet > money) {
                printf("Invalid bet amount.\n");
                break;
            }
            // 模拟掷两个骰子（1~6）
            dice1 = rand() % 6 + 1;
            dice2 = rand() % 6 + 1;
            sum = dice1 + dice2;
            printf("Dice rolled: %d and %d, sum = %d\n", dice1, dice2, sum);
            // 让用户猜大小
            printf("Guess: over 7 (1), under 7 (2), or exactly 7 (3)? ");
            int guess;
            scanf("%d", &guess);
            // 判断结果
            if (guess == 1) {   // 猜大
                if (sum > 7) {
                    winFlag = 1;
                    money += bet;          // 赢回下注金额（净赚bet？规则：赢回下注金额，即返回本金加赢得？规则描述“赢回下注金额”理解为获得下注金额，即净赚？通常赌博是赢回下注金额就是获得等额，但原文说“猜中 over/under 赢回下注金额”，即你下注bet，赢则拿回bet（净赚0？）但那样不合理。通常赌场赢是赢回本金加奖金。但规则明确：“猜中 over/under 赢回下注金额” 可能是指你赢得与下注相等的金额，即净赚bet。结合“猜中 exactly 赢双倍”可知over/under是赢回下注金额（即净赚bet），exactly赢双倍（净赚2*bet）。所以我们按净赚处理：猜对over/under，money += bet；猜对exact，money += 2*bet。同时幸运变化。
                    luck += 5;
                    if (luck > 100) luck = 100;
                    printf("You won! +%d SP. Luck +5.\n", bet);
                }
                else {
                    winFlag = 0;
                    money -= bet;          // 输掉下注金额
                    luck -= 5;
                    if (luck < 0) luck = 0;
                    printf("You lost! -%d SP. Luck -5.\n", bet);
                }
            }
            else if (guess == 2) { // 猜小
                if (sum < 7) {
                    winFlag = 1;
                    money += bet;
                    luck += 5;
                    if (luck > 100) luck = 100;
                    printf("You won! +%d SP. Luck +5.\n", bet);
                }
                else {
                    winFlag = 0;
                    money -= bet;
                    luck -= 5;
                    if (luck < 0) luck = 0;
                    printf("You lost! -%d SP. Luck -5.\n", bet);
                }
            }
            else if (guess == 3) { // 猜正好7
                if (sum == 7) {
                    winFlag = 1;
                    money += 2 * bet;     // 赢双倍
                    luck += 10;
                    if (luck > 100) luck = 100;
                    printf("You won! +%d SP (double). Luck +10.\n", 2 * bet);
                }
                else {
                    winFlag = 0;
                    money -= bet;
                    luck -= 5;
                    if (luck < 0) luck = 0;
                    printf("You lost! -%d SP. Luck -5.\n", bet);
                }
            }
            else {
                printf("Invalid guess.\n");
            }
            break;

            // ----- 4. 套取情报 -----
        case 4:
            if (money >= 5) {
                money -= 5;
                totalSpent += 5;
                intelligence += 15;
                if (intelligence > 100) intelligence = 100;
                printf("You bought information. Intelligence +15. (Cost 5 SP)\n");
            }
            else {
                printf("Not enough SP! Need 5 SP.\n");
            }
            break;

            // ----- 5. 扳手腕 -----
        case 5:
            if (money >= 3) {
                // 下注3 SP，输赢由运气决定（随机模拟）
                // 我们简单使用rand()%2，0输1赢
                int result = rand() % 2;
                if (result == 1) { // 赢
                    money -= 3;     // 下注金额（但规则：下注3 SP，赢则获得6 SP？原文“扳手腕：下注 3 SP，赢则 reputation +10，获得 6 SP；输则 health -10” 也就是说下注3，赢了得到6（净赚3？），输了失去3。我们实现：先扣3，赢则加6，输则扣3并health-10。
                    money += 6;     // 赢获得6 SP（净赚3）
                    reputation += 10;
                    if (reputation > 100) reputation = 100;
                    printf("You won arm wrestling! Reputation +10, got 6 SP (net +3).\n");
                }
                else {
                    money -= 3;     // 输掉下注
                    health -= 10;
                    if (health < 0) health = 0;
                    printf("You lost arm wrestling! Health -10, lost 3 SP.\n");
                }
            }
            else {
                printf("Not enough SP! Need 3 SP to bet.\n");
            }
            break;

            // ----- 6. 请全酒馆喝酒 -----
        case 6:
            if (money >= 10) {
                money -= 10;
                totalSpent += 10;
                reputation += 20;
                if (reputation > 100) reputation = 100;
                printf("You bought a round for the tavern. Reputation +20. (Cost 10 SP)\n");
            }
            else {
                printf("Not enough SP! Need 10 SP.\n");
            }
            break;

            // ----- 7. 施舍乞丐 -----
        case 7:
            if (money >= 1) {
                money -= 1;
                totalSpent += 1;
                luck += 10;
                if (luck > 100) luck = 100;
                printf("You gave to a beggar. Luck +10. (Cost 1 SP)\n");
            }
            else {
                printf("Not enough SP! Need 1 SP.\n");
            }
            break;

            // ----- 8. 打零工（搬酒桶） -----
        case 8:
            // 打工赚钱，不消耗钱，反而增加
            money += 2;
            health -= 5;
            if (health < 0) health = 0;
            printf("You worked odd jobs (carried barrels). Earned 2 SP, Health -5.\n");
            break;

            // ----- 9. 卖航海知识 -----
        case 9:
            money += 6;
            intelligence += 5;
            if (intelligence > 100) intelligence = 100;
            printf("You sold sailing knowledge. Earned 6 SP, Intelligence +5.\n");
            break;

            // ----- 10. 替人写家信 -----
        case 10:
            money += 4;
            intelligence += 3;
            if (intelligence > 100) intelligence = 100;
            printf("You wrote letters for sailors. Earned 4 SP, Intelligence +3.\n");
            break;

            // ----- 11. 替人跑腿送信 -----
        case 11:
            money += 2;
            luck += 3;
            if (luck > 100) luck = 100;
            printf("You delivered messages. Earned 2 SP, Luck +3.\n");
            break;

            // ----- 12. 看手相（随机赚5或0） -----
        case 12:
            // 使用rand() % 2，0或1
            temp = rand() % 2;
            if (temp == 1) {
                money += 5;
                printf("You told fortunes and earned 5 SP!\n");
            }
            else {
                printf("You told fortunes but earned nothing.\n");
            }
            break;

            // ----- 13. 查看状态和账单 -----
        case 13:
            printf("\n===== STATUS & BILL =====\n");
            printf("Total spent: %d SP\n", totalSpent);
            printf("Remaining money: %d SP\n", money);
            printf("Health: %d\n", health);
            printf("Intelligence: %d\n", intelligence);
            printf("Reputation: %d\n", reputation);
            printf("Luck: %d\n", luck);
            // 特殊状态提醒
            if (health < 20) {
                printf("You feel very weak.\n");
            }
            if (reputation > 80) {
                printf("Everyone in the tavern is talking about your generosity.\n");
            }
            break;

            // ----- 14. 离开酒馆（结束循环） -----
        case 14:
            printf("\nYou decide to leave the tavern.\n");
            // 跳出switch，并使用break跳出while？这里用goto或设置标志。因为switch内无法直接跳出while，我们用return或设置flag。简单用goto跳出循环。
            goto end_loop;  // 使用goto跳转到循环后的标签

        default:
            printf("Invalid choice. Please enter a number between 1 and 14.\n");
            break;
        } // end switch

        // 每次操作后，检查health是否低于20并提示
        if (health < 20 && health > 0) { // 避免重复提示
            printf("You feel very weak.\n");
        }
        if (reputation > 80) {
            printf("Everyone in the tavern is talking about your generosity.\n");
        }
        // 如果health为0，可以提前结束？但也可以继续，直到用户选择离开。或者我们允许health为0，但之后可能触发BE。
        // 为了剧情，我们让用户继续，但结束时判断。

    } // end while

end_loop:  // 跳出循环的标签

    // ===== 结局判定 =====
    printf("\n========== FINAL BILL & STATUS ==========\n");
    printf("Total spent: %d SP\n", totalSpent);
    printf("Remaining money: %d SP\n", money);
    printf("Final Health: %d\n", health);
    printf("Final Intelligence: %d\n", intelligence);
    printf("Final Reputation: %d\n", reputation);
    printf("Final Luck: %d\n", luck);

    // 三个结局：BE（坏结局）、HE（好结局）、TE（普通结局）
    // 判断条件：若 health <= 0，则为BE（死在酒馆）
    // 否则若 health >= 50 && intelligence >= 50 && reputation >= 80 && luck >= 50，则HE（与船长度假）
    // 其余为TE（普通度过一天）
    if (health <= 0) {
        printf("\n--- BAD ENDING ---\n");
        printf("Your health has failed. You collapse on the tavern floor and die.\n");
        printf("The pirates of Port Royal mourn your passing, but only briefly.\n");
        printf("You have met your end in this tavern.\n");
    }
    else if (health >= 50 && intelligence >= 50 && reputation >= 80 && luck >= 50) {
        printf("\n--- HAPPY ENDING ---\n");
        printf("You have become a legend in this tavern! Your reputation soars,\n");
        printf("and the captain hears of your exploits. He invites you to join him\n");
        printf("on a vacation to a deserted island beach. You relax in the sun,\n");
        printf("sipping rum and enjoying the fruits of your success.\n");
        printf("A truly memorable end to your night.\n");
    }
    else {
        printf("\n--- TRUE ENDING (Ordinary) ---\n");
        printf("You survived the night, but it was an ordinary one. You spent your\n");
        printf("silver, made some friends, lost some battles, and now you must face\n");
        printf("tomorrow. The sea awaits, and you will have to find a way to keep\n");
        printf("yourself alive and prosperous. Another day in the life of a pirate.\n");
    }

    printf("\nThank you for playing! Farewell, Navigator.\n");
    return 0;  // 程序正常结束
}
