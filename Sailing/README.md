# Sailing
海盗船航线管理系统 
PIRATE ROUTE MANAGEMENT SYSTEM

# 功能菜单说明 | Main Menu Functions
启动程序后，你会看到以下 5 个选项：
Upon launching the program, you will see the following 5 options:
1. 录入航线
    依次输入：起点编号、终点编号、距离（海里）、船速（节）、风向、天气。
    注意：距离和船速必须大于0，否则录入失败。
    风向：T=顺风， H=逆风， O=其他。
    天气：S=晴天， R=雨天， T=暴风雨。
Enter a route
      Enter in sequence: origin code, destination code, distance (nautical miles), vessel speed (knots), wind direction, and weather.
      Note: Both distance and speed must be greater than 0; otherwise, entry fails.
      Wind direction: T = tailwind, H = headwind, O = other.
      Weather: S = sunny, R = rainy, T = stormy.

2. 查看当前航线
    显示你刚刚录入的所有信息。如果还没录入，程序会提示你先录入。
View current route
      Displays all the information you have just entered. If no route has been entered yet, the program will prompt you to enter one first.

3. 判断航线风险
    根据录入的信息自动评级：
    危险：天气为暴风雨(T) 或 风向为逆风(H)。
    安全：天气为晴天(S) 且 风向为顺风(T)。
    一般：除以上两种情况外的其他组合。
Assess route risk
      Automatically rates the route based on the entered information:
      Hazardous : if weather is stormy (T) OR wind direction is headwind (H).
      Safe : if weather is sunny (S) AND wind direction is tailwind (T).
      Moderate : for any other combination not covered above.

4. 计算预计航行时间
    程序执行：时间 = 距离 / 船速。
    如果航行超过24小时，还会自动换算成天数显示。
Calculate estimated sailing time
      The program computes: Time = distance / speed.
      If the voyage exceeds 24 hours, the result will be automatically converted and displayed in days as well.

5. 退出系统
    结束程序运行
Exit system
      Terminates the program.
