#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 39 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# myparser.v
# YACC verbose file generated from myparser.y.
# 
# Date: 12/28/16
# Time: 09:23:05
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : program $end

    1  program : INT MAIN LP RP BLP seq BRP

    2  seq : seq stmt
    3      | stmt
    4      |

    5  stmt : nosemi_stmt SEMI
    6       | for_stmt
    7       | while_stmt
    8       | if_stmt
    9       | SEMI

   10  nosemi_stmt : def_stmt
   11              | assign_stmt
   12              | PRINT LP expr RP
   13              | INPUT LP ID RP
   14              | expr
   15              |

   16  def_stmt : INT assign_stmt
   17           | DOUBLE assign_stmt
   18           | CHAR assign_stmt
   19           | assign_stmt
   20           |

   21  if_stmt : IF LP expr RP stmt
   22          | IF LP expr RP BLP seq BRP
   23          | IF LP expr RP BLP seq BRP ELSE stmt
   24          | IF LP expr RP stmt ELSE BLP seq BRP
   25          | IF LP expr RP stmt ELSE stmt
   26          | IF LP expr RP BLP seq BRP ELSE BLP seq BRP

   27  assign_stmt : assign_stmt DOU assign_stmt
   28              | ID ASSIGN expr
   29              | ID

   30  for_stmt : FOR LP def_stmt SEMI expr SEMI nosemi_stmt RP stmt
   31           | FOR LP def_stmt SEMI expr SEMI nosemi_stmt RP BLP seq BRP

   32  while_stmt : WHILE LP expr RP BLP seq BRP

   33  expr : expr PLUS expr
   34       | expr MINUS expr
   35       | expr TIMES expr
   36       | expr OVER expr
   37       | expr MODU expr
   38       | expr CAND expr
   39       | expr COR expr
   40       | expr XOR expr
   41       | BN expr
   42       | expr LS NUMBER_I
   43       | expr RS NUMBER_I
   44       | expr EQUAL expr
   45       | expr LAE expr
   46       | expr LEE expr
   47       | expr LARGE expr
   48       | expr LESS expr
   49       | expr UNEQ expr
   50       | expr AND expr
   51       | expr OR expr
   52       | NOT expr
   53       | LP expr RP
   54       | ID SELFP
   55       | ID SELFM
   56       | MINUS expr
   57       | NUMBER_D
   58       | NUMBER_I
   59       | CHARACTER
   60       | ID
   61       |


##############################################################################
# States
##############################################################################

state 0
	$accept : . program $end

	INT  shift 1

	program  goto 2


state 1
	program : INT . MAIN LP RP BLP seq BRP

	MAIN  shift 3


state 2
	$accept : program . $end  (0)

	$end  accept


state 3
	program : INT MAIN . LP RP BLP seq BRP

	LP  shift 4


state 4
	program : INT MAIN LP . RP BLP seq BRP

	RP  shift 5


state 5
	program : INT MAIN LP RP . BLP seq BRP

	BLP  shift 6


6: shift-reduce conflict (shift 13, reduce 61) on MINUS
6: shift-reduce conflict (shift 16, reduce 61) on SEMI
6: shift-reduce conflict (shift 7, reduce 4) on NUMBER_I
6: shift-reduce conflict (shift 8, reduce 4) on NUMBER_D
6: shift-reduce conflict (shift 9, reduce 4) on ID
6: shift-reduce conflict (shift 10, reduce 4) on IF
6: shift-reduce conflict (shift 11, reduce 4) on FOR
6: shift-reduce conflict (shift 12, reduce 4) on WHILE
6: reduce-reduce conflict (reduce 4, reduce 61) on PLUS
6: shift-reduce conflict (shift 13, reduce 4) on MINUS
6: reduce-reduce conflict (reduce 4, reduce 61) on TIMES
6: reduce-reduce conflict (reduce 4, reduce 61) on OVER
6: reduce-reduce conflict (reduce 4, reduce 61) on MODU
6: reduce-reduce conflict (reduce 4, reduce 61) on CAND
6: reduce-reduce conflict (reduce 4, reduce 61) on COR
6: reduce-reduce conflict (reduce 4, reduce 61) on XOR
6: shift-reduce conflict (shift 14, reduce 4) on BN
6: reduce-reduce conflict (reduce 4, reduce 61) on LS
6: reduce-reduce conflict (reduce 4, reduce 61) on RS
6: shift-reduce conflict (shift 15, reduce 4) on LP
6: shift-reduce conflict (shift 16, reduce 4) on SEMI
6: reduce-reduce conflict (reduce 4, reduce 61) on EQUAL
6: reduce-reduce conflict (reduce 4, reduce 61) on LARGE
6: reduce-reduce conflict (reduce 4, reduce 61) on LESS
6: reduce-reduce conflict (reduce 4, reduce 61) on UNEQ
6: reduce-reduce conflict (reduce 4, reduce 61) on AND
6: reduce-reduce conflict (reduce 4, reduce 61) on OR
6: shift-reduce conflict (shift 17, reduce 4) on NOT
6: reduce-reduce conflict (reduce 4, reduce 61) on LAE
6: reduce-reduce conflict (reduce 4, reduce 61) on LEE
6: shift-reduce conflict (shift 18, reduce 4) on INT
6: shift-reduce conflict (shift 19, reduce 4) on DOUBLE
6: shift-reduce conflict (shift 20, reduce 4) on CHAR
6: shift-reduce conflict (shift 21, reduce 4) on CHARACTER
6: shift-reduce conflict (shift 22, reduce 4) on PRINT
6: shift-reduce conflict (shift 23, reduce 4) on INPUT
6: shift-reduce conflict (shift 16, reduce 15) on SEMI
6: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 6
	program : INT MAIN LP RP BLP . seq BRP
	expr : .  (61)
	seq : .  (4)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 4

	stmt  goto 24
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	seq  goto 28
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


state 7
	expr : NUMBER_I .  (58)

	.  reduce 58


state 8
	expr : NUMBER_D .  (57)

	.  reduce 57


9: reduce-reduce conflict (reduce 29, reduce 60) on RP
9: reduce-reduce conflict (reduce 29, reduce 60) on SEMI
state 9
	expr : ID . SELFP
	expr : ID .  (60)
	expr : ID . SELFM
	assign_stmt : ID . ASSIGN expr
	assign_stmt : ID .  (29)

	SELFP  shift 33
	SELFM  shift 34
	ASSIGN  shift 35
	RP  reduce 29
	SEMI  reduce 29
	DOU  reduce 29
	.  reduce 60


state 10
	if_stmt : IF . LP expr RP BLP seq BRP ELSE stmt
	if_stmt : IF . LP expr RP BLP seq BRP
	if_stmt : IF . LP expr RP stmt ELSE BLP seq BRP
	if_stmt : IF . LP expr RP BLP seq BRP ELSE BLP seq BRP
	if_stmt : IF . LP expr RP stmt ELSE stmt
	if_stmt : IF . LP expr RP stmt

	LP  shift 36


state 11
	for_stmt : FOR . LP def_stmt SEMI expr SEMI nosemi_stmt RP stmt
	for_stmt : FOR . LP def_stmt SEMI expr SEMI nosemi_stmt RP BLP seq BRP

	LP  shift 37


state 12
	while_stmt : WHILE . LP expr RP BLP seq BRP

	LP  shift 38


13: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 13
	expr : MINUS . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 40


14: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 14
	expr : BN . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 41


15: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 15
	expr : LP . expr RP
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 42


state 16
	stmt : SEMI .  (9)

	.  reduce 9


17: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 17
	expr : NOT . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 43


state 18
	def_stmt : INT . assign_stmt

	ID  shift 44

	assign_stmt  goto 45


state 19
	def_stmt : DOUBLE . assign_stmt

	ID  shift 44

	assign_stmt  goto 46


state 20
	def_stmt : CHAR . assign_stmt

	ID  shift 44

	assign_stmt  goto 47


state 21
	expr : CHARACTER .  (59)

	.  reduce 59


state 22
	nosemi_stmt : PRINT . LP expr RP

	LP  shift 48


state 23
	nosemi_stmt : INPUT . LP ID RP

	LP  shift 49


state 24
	seq : stmt .  (3)

	.  reduce 3


state 25
	stmt : if_stmt .  (8)

	.  reduce 8


state 26
	nosemi_stmt : def_stmt .  (10)

	.  reduce 10


state 27
	stmt : for_stmt .  (6)

	.  reduce 6


28: shift-reduce conflict (shift 13, reduce 61) on MINUS
28: shift-reduce conflict (shift 16, reduce 61) on SEMI
28: shift-reduce conflict (shift 16, reduce 15) on SEMI
28: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 28
	program : INT MAIN LP RP BLP seq . BRP
	seq : seq . stmt
	expr : .  (61)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	BRP  shift 50
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 61

	stmt  goto 51
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


state 29
	stmt : while_stmt .  (7)

	.  reduce 7


30: reduce-reduce conflict (reduce 11, reduce 19) on RP
30: reduce-reduce conflict (reduce 11, reduce 19) on SEMI
state 30
	nosemi_stmt : assign_stmt .  (11)
	def_stmt : assign_stmt .  (19)
	assign_stmt : assign_stmt . DOU assign_stmt

	DOU  shift 52
	.  reduce 11


state 31
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	nosemi_stmt : expr .  (14)
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	CAND  shift 58
	COR  shift 59
	XOR  shift 60
	LS  shift 61
	RS  shift 62
	EQUAL  shift 63
	LARGE  shift 64
	LESS  shift 65
	UNEQ  shift 66
	AND  shift 67
	OR  shift 68
	LAE  shift 69
	LEE  shift 70
	.  reduce 14


state 32
	stmt : nosemi_stmt . SEMI

	SEMI  shift 71


state 33
	expr : ID SELFP .  (54)

	.  reduce 54


state 34
	expr : ID SELFM .  (55)

	.  reduce 55


35: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 35
	assign_stmt : ID ASSIGN . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 72


36: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 36
	if_stmt : IF LP . expr RP BLP seq BRP ELSE stmt
	if_stmt : IF LP . expr RP BLP seq BRP
	if_stmt : IF LP . expr RP stmt ELSE BLP seq BRP
	if_stmt : IF LP . expr RP BLP seq BRP ELSE BLP seq BRP
	if_stmt : IF LP . expr RP stmt ELSE stmt
	if_stmt : IF LP . expr RP stmt
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 73


state 37
	for_stmt : FOR LP . def_stmt SEMI expr SEMI nosemi_stmt RP stmt
	for_stmt : FOR LP . def_stmt SEMI expr SEMI nosemi_stmt RP BLP seq BRP
	def_stmt : .  (20)

	ID  shift 44
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	.  reduce 20

	def_stmt  goto 74
	assign_stmt  goto 75


38: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 38
	while_stmt : WHILE LP . expr RP BLP seq BRP
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 76


state 39
	expr : ID . SELFP
	expr : ID .  (60)
	expr : ID . SELFM

	SELFP  shift 33
	SELFM  shift 34
	.  reduce 60


40: shift-reduce conflict (shift 62, reduce 56) on RS
state 40
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : MINUS expr .  (56)
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	RS  shift 62
	.  reduce 56


41: shift-reduce conflict (shift 53, reduce 41) on PLUS
41: shift-reduce conflict (shift 54, reduce 41) on MINUS
41: shift-reduce conflict (shift 55, reduce 41) on TIMES
41: shift-reduce conflict (shift 56, reduce 41) on OVER
41: shift-reduce conflict (shift 57, reduce 41) on MODU
41: shift-reduce conflict (shift 58, reduce 41) on CAND
41: shift-reduce conflict (shift 59, reduce 41) on COR
41: shift-reduce conflict (shift 60, reduce 41) on XOR
41: shift-reduce conflict (shift 61, reduce 41) on LS
41: shift-reduce conflict (shift 62, reduce 41) on RS
41: shift-reduce conflict (shift 63, reduce 41) on EQUAL
41: shift-reduce conflict (shift 64, reduce 41) on LARGE
41: shift-reduce conflict (shift 65, reduce 41) on LESS
41: shift-reduce conflict (shift 66, reduce 41) on UNEQ
41: shift-reduce conflict (shift 67, reduce 41) on AND
41: shift-reduce conflict (shift 68, reduce 41) on OR
41: shift-reduce conflict (shift 69, reduce 41) on LAE
41: shift-reduce conflict (shift 70, reduce 41) on LEE
state 41
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : BN expr .  (41)
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	CAND  shift 58
	COR  shift 59
	XOR  shift 60
	LS  shift 61
	RS  shift 62
	EQUAL  shift 63
	LARGE  shift 64
	LESS  shift 65
	UNEQ  shift 66
	AND  shift 67
	OR  shift 68
	LAE  shift 69
	LEE  shift 70
	.  reduce 41


state 42
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : LP expr . RP
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	CAND  shift 58
	COR  shift 59
	XOR  shift 60
	LS  shift 61
	RS  shift 62
	RP  shift 77
	EQUAL  shift 63
	LARGE  shift 64
	LESS  shift 65
	UNEQ  shift 66
	AND  shift 67
	OR  shift 68
	LAE  shift 69
	LEE  shift 70


43: shift-reduce conflict (shift 62, reduce 52) on RS
state 43
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : NOT expr .  (52)
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	CAND  shift 58
	COR  shift 59
	LS  shift 61
	RS  shift 62
	EQUAL  shift 63
	LARGE  shift 64
	LESS  shift 65
	UNEQ  shift 66
	LAE  shift 69
	LEE  shift 70
	.  reduce 52


state 44
	assign_stmt : ID . ASSIGN expr
	assign_stmt : ID .  (29)

	ASSIGN  shift 35
	.  reduce 29


state 45
	def_stmt : INT assign_stmt .  (16)
	assign_stmt : assign_stmt . DOU assign_stmt

	DOU  shift 52
	.  reduce 16


state 46
	assign_stmt : assign_stmt . DOU assign_stmt
	def_stmt : DOUBLE assign_stmt .  (17)

	DOU  shift 52
	.  reduce 17


state 47
	def_stmt : CHAR assign_stmt .  (18)
	assign_stmt : assign_stmt . DOU assign_stmt

	DOU  shift 52
	.  reduce 18


48: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 48
	nosemi_stmt : PRINT LP . expr RP
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 78


state 49
	nosemi_stmt : INPUT LP . ID RP

	ID  shift 79


state 50
	program : INT MAIN LP RP BLP seq BRP .  (1)

	.  reduce 1


state 51
	seq : seq stmt .  (2)

	.  reduce 2


state 52
	assign_stmt : assign_stmt DOU . assign_stmt

	ID  shift 44

	assign_stmt  goto 80


53: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 53
	expr : expr PLUS . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 81


54: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 54
	expr : expr MINUS . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 82


55: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 55
	expr : expr TIMES . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 83


56: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 56
	expr : expr OVER . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 84


57: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 57
	expr : expr MODU . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 85


58: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 58
	expr : expr CAND . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 86


59: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 59
	expr : expr COR . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 87


60: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 60
	expr : expr XOR . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 88


state 61
	expr : expr LS . NUMBER_I

	NUMBER_I  shift 89


state 62
	expr : expr RS . NUMBER_I

	NUMBER_I  shift 90


63: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 63
	expr : expr EQUAL . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 91


64: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 64
	expr : expr LARGE . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 92


65: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 65
	expr : expr LESS . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 93


66: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 66
	expr : expr UNEQ . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 94


67: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 67
	expr : expr AND . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 95


68: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 68
	expr : expr OR . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 96


69: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 69
	expr : expr LAE . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 97


70: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 70
	expr : expr LEE . expr
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 98


state 71
	stmt : nosemi_stmt SEMI .  (5)

	.  reduce 5


state 72
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	assign_stmt : ID ASSIGN expr .  (28)
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	CAND  shift 58
	COR  shift 59
	XOR  shift 60
	LS  shift 61
	RS  shift 62
	EQUAL  shift 63
	LARGE  shift 64
	LESS  shift 65
	UNEQ  shift 66
	AND  shift 67
	OR  shift 68
	LAE  shift 69
	LEE  shift 70
	.  reduce 28


state 73
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	if_stmt : IF LP expr . RP BLP seq BRP ELSE stmt
	if_stmt : IF LP expr . RP BLP seq BRP
	if_stmt : IF LP expr . RP stmt ELSE BLP seq BRP
	if_stmt : IF LP expr . RP BLP seq BRP ELSE BLP seq BRP
	if_stmt : IF LP expr . RP stmt ELSE stmt
	expr : expr . PLUS expr
	if_stmt : IF LP expr . RP stmt

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	CAND  shift 58
	COR  shift 59
	XOR  shift 60
	LS  shift 61
	RS  shift 62
	RP  shift 99
	EQUAL  shift 63
	LARGE  shift 64
	LESS  shift 65
	UNEQ  shift 66
	AND  shift 67
	OR  shift 68
	LAE  shift 69
	LEE  shift 70


state 74
	for_stmt : FOR LP def_stmt . SEMI expr SEMI nosemi_stmt RP stmt
	for_stmt : FOR LP def_stmt . SEMI expr SEMI nosemi_stmt RP BLP seq BRP

	SEMI  shift 100


state 75
	def_stmt : assign_stmt .  (19)
	assign_stmt : assign_stmt . DOU assign_stmt

	DOU  shift 52
	.  reduce 19


state 76
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	while_stmt : WHILE LP expr . RP BLP seq BRP
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	CAND  shift 58
	COR  shift 59
	XOR  shift 60
	LS  shift 61
	RS  shift 62
	RP  shift 101
	EQUAL  shift 63
	LARGE  shift 64
	LESS  shift 65
	UNEQ  shift 66
	AND  shift 67
	OR  shift 68
	LAE  shift 69
	LEE  shift 70


state 77
	expr : LP expr RP .  (53)

	.  reduce 53


state 78
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	nosemi_stmt : PRINT LP expr . RP
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	CAND  shift 58
	COR  shift 59
	XOR  shift 60
	LS  shift 61
	RS  shift 62
	RP  shift 102
	EQUAL  shift 63
	LARGE  shift 64
	LESS  shift 65
	UNEQ  shift 66
	AND  shift 67
	OR  shift 68
	LAE  shift 69
	LEE  shift 70


state 79
	nosemi_stmt : INPUT LP ID . RP

	RP  shift 103


80: shift-reduce conflict (shift 52, reduce 27) on DOU
state 80
	assign_stmt : assign_stmt DOU assign_stmt .  (27)
	assign_stmt : assign_stmt . DOU assign_stmt

	DOU  shift 52
	.  reduce 27


81: shift-reduce conflict (shift 62, reduce 33) on RS
state 81
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr PLUS expr .  (33)
	expr : expr . PLUS expr

	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	RS  shift 62
	.  reduce 33


82: shift-reduce conflict (shift 62, reduce 34) on RS
state 82
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr MINUS expr .  (34)
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	RS  shift 62
	.  reduce 34


83: shift-reduce conflict (shift 62, reduce 35) on RS
state 83
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr TIMES expr .  (35)
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	RS  shift 62
	.  reduce 35


84: shift-reduce conflict (shift 62, reduce 36) on RS
state 84
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr OVER expr .  (36)
	expr : expr . OVER expr
	expr : expr . PLUS expr

	RS  shift 62
	.  reduce 36


85: shift-reduce conflict (shift 62, reduce 37) on RS
state 85
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr MODU expr .  (37)
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	RS  shift 62
	.  reduce 37


86: shift-reduce conflict (shift 62, reduce 38) on RS
state 86
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr CAND expr .  (38)
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	LS  shift 61
	RS  shift 62
	EQUAL  shift 63
	LARGE  shift 64
	LESS  shift 65
	UNEQ  shift 66
	LAE  shift 69
	LEE  shift 70
	.  reduce 38


87: shift-reduce conflict (shift 62, reduce 39) on RS
state 87
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr COR expr .  (39)
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	CAND  shift 58
	LS  shift 61
	RS  shift 62
	EQUAL  shift 63
	LARGE  shift 64
	LESS  shift 65
	UNEQ  shift 66
	LAE  shift 69
	LEE  shift 70
	.  reduce 39


88: shift-reduce conflict (shift 62, reduce 40) on RS
state 88
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr XOR expr .  (40)
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	CAND  shift 58
	COR  shift 59
	LS  shift 61
	RS  shift 62
	EQUAL  shift 63
	LARGE  shift 64
	LESS  shift 65
	UNEQ  shift 66
	AND  shift 67
	OR  shift 68
	LAE  shift 69
	LEE  shift 70
	.  reduce 40


state 89
	expr : expr LS NUMBER_I .  (42)

	.  reduce 42


state 90
	expr : expr RS NUMBER_I .  (43)

	.  reduce 43


91: shift-reduce conflict (shift 62, reduce 44) on RS
state 91
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr EQUAL expr .  (44)
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	LS  shift 61
	RS  shift 62
	.  reduce 44


92: shift-reduce conflict (shift 62, reduce 47) on RS
state 92
	expr : expr LARGE expr .  (47)
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	LS  shift 61
	RS  shift 62
	.  reduce 47


93: shift-reduce conflict (shift 62, reduce 48) on RS
state 93
	expr : expr . LARGE expr
	expr : expr LESS expr .  (48)
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	LS  shift 61
	RS  shift 62
	.  reduce 48


94: shift-reduce conflict (shift 62, reduce 49) on RS
state 94
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr UNEQ expr .  (49)
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	LS  shift 61
	RS  shift 62
	.  reduce 49


95: shift-reduce conflict (shift 62, reduce 50) on RS
state 95
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr AND expr .  (50)
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	CAND  shift 58
	COR  shift 59
	LS  shift 61
	RS  shift 62
	EQUAL  shift 63
	LARGE  shift 64
	LESS  shift 65
	UNEQ  shift 66
	LAE  shift 69
	LEE  shift 70
	.  reduce 50


96: shift-reduce conflict (shift 62, reduce 51) on RS
state 96
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr OR expr .  (51)
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	CAND  shift 58
	COR  shift 59
	LS  shift 61
	RS  shift 62
	EQUAL  shift 63
	LARGE  shift 64
	LESS  shift 65
	UNEQ  shift 66
	AND  shift 67
	LAE  shift 69
	LEE  shift 70
	.  reduce 51


97: shift-reduce conflict (shift 62, reduce 45) on RS
state 97
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr LAE expr .  (45)
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	LS  shift 61
	RS  shift 62
	.  reduce 45


98: shift-reduce conflict (shift 62, reduce 46) on RS
state 98
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr LEE expr .  (46)
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	LS  shift 61
	RS  shift 62
	.  reduce 46


99: shift-reduce conflict (shift 13, reduce 61) on MINUS
99: shift-reduce conflict (shift 16, reduce 61) on SEMI
99: shift-reduce conflict (shift 16, reduce 15) on SEMI
99: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 99
	if_stmt : IF LP expr RP . BLP seq BRP ELSE stmt
	if_stmt : IF LP expr RP . BLP seq BRP
	if_stmt : IF LP expr RP . stmt ELSE BLP seq BRP
	if_stmt : IF LP expr RP . BLP seq BRP ELSE BLP seq BRP
	if_stmt : IF LP expr RP . stmt ELSE stmt
	if_stmt : IF LP expr RP . stmt
	expr : .  (61)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	BLP  shift 104
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 61

	stmt  goto 105
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


100: shift-reduce conflict (shift 13, reduce 61) on MINUS
state 100
	for_stmt : FOR LP def_stmt SEMI . expr SEMI nosemi_stmt RP stmt
	for_stmt : FOR LP def_stmt SEMI . expr SEMI nosemi_stmt RP BLP seq BRP
	expr : .  (61)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 39
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	CHARACTER  shift 21
	.  reduce 61

	expr  goto 106


state 101
	while_stmt : WHILE LP expr RP . BLP seq BRP

	BLP  shift 107


state 102
	nosemi_stmt : PRINT LP expr RP .  (12)

	.  reduce 12


state 103
	nosemi_stmt : INPUT LP ID RP .  (13)

	.  reduce 13


104: shift-reduce conflict (shift 13, reduce 61) on MINUS
104: shift-reduce conflict (shift 16, reduce 61) on SEMI
104: shift-reduce conflict (shift 7, reduce 4) on NUMBER_I
104: shift-reduce conflict (shift 8, reduce 4) on NUMBER_D
104: shift-reduce conflict (shift 9, reduce 4) on ID
104: shift-reduce conflict (shift 10, reduce 4) on IF
104: shift-reduce conflict (shift 11, reduce 4) on FOR
104: shift-reduce conflict (shift 12, reduce 4) on WHILE
104: reduce-reduce conflict (reduce 4, reduce 61) on PLUS
104: shift-reduce conflict (shift 13, reduce 4) on MINUS
104: reduce-reduce conflict (reduce 4, reduce 61) on TIMES
104: reduce-reduce conflict (reduce 4, reduce 61) on OVER
104: reduce-reduce conflict (reduce 4, reduce 61) on MODU
104: reduce-reduce conflict (reduce 4, reduce 61) on CAND
104: reduce-reduce conflict (reduce 4, reduce 61) on COR
104: reduce-reduce conflict (reduce 4, reduce 61) on XOR
104: shift-reduce conflict (shift 14, reduce 4) on BN
104: reduce-reduce conflict (reduce 4, reduce 61) on LS
104: reduce-reduce conflict (reduce 4, reduce 61) on RS
104: shift-reduce conflict (shift 15, reduce 4) on LP
104: shift-reduce conflict (shift 16, reduce 4) on SEMI
104: reduce-reduce conflict (reduce 4, reduce 61) on EQUAL
104: reduce-reduce conflict (reduce 4, reduce 61) on LARGE
104: reduce-reduce conflict (reduce 4, reduce 61) on LESS
104: reduce-reduce conflict (reduce 4, reduce 61) on UNEQ
104: reduce-reduce conflict (reduce 4, reduce 61) on AND
104: reduce-reduce conflict (reduce 4, reduce 61) on OR
104: shift-reduce conflict (shift 17, reduce 4) on NOT
104: reduce-reduce conflict (reduce 4, reduce 61) on LAE
104: reduce-reduce conflict (reduce 4, reduce 61) on LEE
104: shift-reduce conflict (shift 18, reduce 4) on INT
104: shift-reduce conflict (shift 19, reduce 4) on DOUBLE
104: shift-reduce conflict (shift 20, reduce 4) on CHAR
104: shift-reduce conflict (shift 21, reduce 4) on CHARACTER
104: shift-reduce conflict (shift 22, reduce 4) on PRINT
104: shift-reduce conflict (shift 23, reduce 4) on INPUT
104: shift-reduce conflict (shift 16, reduce 15) on SEMI
104: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 104
	if_stmt : IF LP expr RP BLP . seq BRP ELSE stmt
	if_stmt : IF LP expr RP BLP . seq BRP
	if_stmt : IF LP expr RP BLP . seq BRP ELSE BLP seq BRP
	expr : .  (61)
	seq : .  (4)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 4

	stmt  goto 24
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	seq  goto 108
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


105: shift-reduce conflict (shift 109, reduce 21) on ELSE
state 105
	if_stmt : IF LP expr RP stmt . ELSE BLP seq BRP
	if_stmt : IF LP expr RP stmt . ELSE stmt
	if_stmt : IF LP expr RP stmt .  (21)

	ELSE  shift 109
	.  reduce 21


state 106
	expr : expr . LARGE expr
	expr : expr . LESS expr
	expr : expr . MINUS expr
	expr : expr . LS NUMBER_I
	expr : expr . AND expr
	expr : expr . COR expr
	expr : expr . LAE expr
	expr : expr . OR expr
	expr : expr . EQUAL expr
	expr : expr . RS NUMBER_I
	expr : expr . MODU expr
	expr : expr . LEE expr
	expr : expr . XOR expr
	expr : expr . UNEQ expr
	expr : expr . CAND expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	for_stmt : FOR LP def_stmt SEMI expr . SEMI nosemi_stmt RP stmt
	for_stmt : FOR LP def_stmt SEMI expr . SEMI nosemi_stmt RP BLP seq BRP
	expr : expr . PLUS expr

	PLUS  shift 53
	MINUS  shift 54
	TIMES  shift 55
	OVER  shift 56
	MODU  shift 57
	CAND  shift 58
	COR  shift 59
	XOR  shift 60
	LS  shift 61
	RS  shift 62
	SEMI  shift 110
	EQUAL  shift 63
	LARGE  shift 64
	LESS  shift 65
	UNEQ  shift 66
	AND  shift 67
	OR  shift 68
	LAE  shift 69
	LEE  shift 70


107: shift-reduce conflict (shift 13, reduce 61) on MINUS
107: shift-reduce conflict (shift 16, reduce 61) on SEMI
107: shift-reduce conflict (shift 7, reduce 4) on NUMBER_I
107: shift-reduce conflict (shift 8, reduce 4) on NUMBER_D
107: shift-reduce conflict (shift 9, reduce 4) on ID
107: shift-reduce conflict (shift 10, reduce 4) on IF
107: shift-reduce conflict (shift 11, reduce 4) on FOR
107: shift-reduce conflict (shift 12, reduce 4) on WHILE
107: reduce-reduce conflict (reduce 4, reduce 61) on PLUS
107: shift-reduce conflict (shift 13, reduce 4) on MINUS
107: reduce-reduce conflict (reduce 4, reduce 61) on TIMES
107: reduce-reduce conflict (reduce 4, reduce 61) on OVER
107: reduce-reduce conflict (reduce 4, reduce 61) on MODU
107: reduce-reduce conflict (reduce 4, reduce 61) on CAND
107: reduce-reduce conflict (reduce 4, reduce 61) on COR
107: reduce-reduce conflict (reduce 4, reduce 61) on XOR
107: shift-reduce conflict (shift 14, reduce 4) on BN
107: reduce-reduce conflict (reduce 4, reduce 61) on LS
107: reduce-reduce conflict (reduce 4, reduce 61) on RS
107: shift-reduce conflict (shift 15, reduce 4) on LP
107: shift-reduce conflict (shift 16, reduce 4) on SEMI
107: reduce-reduce conflict (reduce 4, reduce 61) on EQUAL
107: reduce-reduce conflict (reduce 4, reduce 61) on LARGE
107: reduce-reduce conflict (reduce 4, reduce 61) on LESS
107: reduce-reduce conflict (reduce 4, reduce 61) on UNEQ
107: reduce-reduce conflict (reduce 4, reduce 61) on AND
107: reduce-reduce conflict (reduce 4, reduce 61) on OR
107: shift-reduce conflict (shift 17, reduce 4) on NOT
107: reduce-reduce conflict (reduce 4, reduce 61) on LAE
107: reduce-reduce conflict (reduce 4, reduce 61) on LEE
107: shift-reduce conflict (shift 18, reduce 4) on INT
107: shift-reduce conflict (shift 19, reduce 4) on DOUBLE
107: shift-reduce conflict (shift 20, reduce 4) on CHAR
107: shift-reduce conflict (shift 21, reduce 4) on CHARACTER
107: shift-reduce conflict (shift 22, reduce 4) on PRINT
107: shift-reduce conflict (shift 23, reduce 4) on INPUT
107: shift-reduce conflict (shift 16, reduce 15) on SEMI
107: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 107
	while_stmt : WHILE LP expr RP BLP . seq BRP
	expr : .  (61)
	seq : .  (4)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 4

	stmt  goto 24
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	seq  goto 111
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


108: shift-reduce conflict (shift 13, reduce 61) on MINUS
108: shift-reduce conflict (shift 16, reduce 61) on SEMI
108: shift-reduce conflict (shift 16, reduce 15) on SEMI
108: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 108
	seq : seq . stmt
	if_stmt : IF LP expr RP BLP seq . BRP ELSE stmt
	if_stmt : IF LP expr RP BLP seq . BRP
	if_stmt : IF LP expr RP BLP seq . BRP ELSE BLP seq BRP
	expr : .  (61)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	BRP  shift 112
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 61

	stmt  goto 51
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


109: shift-reduce conflict (shift 13, reduce 61) on MINUS
109: shift-reduce conflict (shift 16, reduce 61) on SEMI
109: shift-reduce conflict (shift 16, reduce 15) on SEMI
109: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 109
	if_stmt : IF LP expr RP stmt ELSE . BLP seq BRP
	if_stmt : IF LP expr RP stmt ELSE . stmt
	expr : .  (61)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	BLP  shift 113
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 61

	stmt  goto 114
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


110: shift-reduce conflict (shift 13, reduce 61) on MINUS
110: reduce-reduce conflict (reduce 15, reduce 61) on RP
110: reduce-reduce conflict (reduce 15, reduce 20) on RP
state 110
	for_stmt : FOR LP def_stmt SEMI expr SEMI . nosemi_stmt RP stmt
	for_stmt : FOR LP def_stmt SEMI expr SEMI . nosemi_stmt RP BLP seq BRP
	expr : .  (61)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	RP  reduce 15
	.  reduce 61

	def_stmt  goto 26
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 115


111: shift-reduce conflict (shift 13, reduce 61) on MINUS
111: shift-reduce conflict (shift 16, reduce 61) on SEMI
111: shift-reduce conflict (shift 16, reduce 15) on SEMI
111: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 111
	seq : seq . stmt
	while_stmt : WHILE LP expr RP BLP seq . BRP
	expr : .  (61)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	BRP  shift 116
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 61

	stmt  goto 51
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


112: shift-reduce conflict (shift 117, reduce 22) on ELSE
state 112
	if_stmt : IF LP expr RP BLP seq BRP . ELSE stmt
	if_stmt : IF LP expr RP BLP seq BRP .  (22)
	if_stmt : IF LP expr RP BLP seq BRP . ELSE BLP seq BRP

	ELSE  shift 117
	.  reduce 22


113: shift-reduce conflict (shift 13, reduce 61) on MINUS
113: shift-reduce conflict (shift 16, reduce 61) on SEMI
113: shift-reduce conflict (shift 7, reduce 4) on NUMBER_I
113: shift-reduce conflict (shift 8, reduce 4) on NUMBER_D
113: shift-reduce conflict (shift 9, reduce 4) on ID
113: shift-reduce conflict (shift 10, reduce 4) on IF
113: shift-reduce conflict (shift 11, reduce 4) on FOR
113: shift-reduce conflict (shift 12, reduce 4) on WHILE
113: reduce-reduce conflict (reduce 4, reduce 61) on PLUS
113: shift-reduce conflict (shift 13, reduce 4) on MINUS
113: reduce-reduce conflict (reduce 4, reduce 61) on TIMES
113: reduce-reduce conflict (reduce 4, reduce 61) on OVER
113: reduce-reduce conflict (reduce 4, reduce 61) on MODU
113: reduce-reduce conflict (reduce 4, reduce 61) on CAND
113: reduce-reduce conflict (reduce 4, reduce 61) on COR
113: reduce-reduce conflict (reduce 4, reduce 61) on XOR
113: shift-reduce conflict (shift 14, reduce 4) on BN
113: reduce-reduce conflict (reduce 4, reduce 61) on LS
113: reduce-reduce conflict (reduce 4, reduce 61) on RS
113: shift-reduce conflict (shift 15, reduce 4) on LP
113: shift-reduce conflict (shift 16, reduce 4) on SEMI
113: reduce-reduce conflict (reduce 4, reduce 61) on EQUAL
113: reduce-reduce conflict (reduce 4, reduce 61) on LARGE
113: reduce-reduce conflict (reduce 4, reduce 61) on LESS
113: reduce-reduce conflict (reduce 4, reduce 61) on UNEQ
113: reduce-reduce conflict (reduce 4, reduce 61) on AND
113: reduce-reduce conflict (reduce 4, reduce 61) on OR
113: shift-reduce conflict (shift 17, reduce 4) on NOT
113: reduce-reduce conflict (reduce 4, reduce 61) on LAE
113: reduce-reduce conflict (reduce 4, reduce 61) on LEE
113: shift-reduce conflict (shift 18, reduce 4) on INT
113: shift-reduce conflict (shift 19, reduce 4) on DOUBLE
113: shift-reduce conflict (shift 20, reduce 4) on CHAR
113: shift-reduce conflict (shift 21, reduce 4) on CHARACTER
113: shift-reduce conflict (shift 22, reduce 4) on PRINT
113: shift-reduce conflict (shift 23, reduce 4) on INPUT
113: shift-reduce conflict (shift 16, reduce 15) on SEMI
113: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 113
	if_stmt : IF LP expr RP stmt ELSE BLP . seq BRP
	expr : .  (61)
	seq : .  (4)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 4

	stmt  goto 24
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	seq  goto 118
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


state 114
	if_stmt : IF LP expr RP stmt ELSE stmt .  (25)

	.  reduce 25


state 115
	for_stmt : FOR LP def_stmt SEMI expr SEMI nosemi_stmt . RP stmt
	for_stmt : FOR LP def_stmt SEMI expr SEMI nosemi_stmt . RP BLP seq BRP

	RP  shift 119


state 116
	while_stmt : WHILE LP expr RP BLP seq BRP .  (32)

	.  reduce 32


117: shift-reduce conflict (shift 13, reduce 61) on MINUS
117: shift-reduce conflict (shift 16, reduce 61) on SEMI
117: shift-reduce conflict (shift 16, reduce 15) on SEMI
117: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 117
	if_stmt : IF LP expr RP BLP seq BRP ELSE . stmt
	if_stmt : IF LP expr RP BLP seq BRP ELSE . BLP seq BRP
	expr : .  (61)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	BLP  shift 120
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 61

	stmt  goto 121
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


118: shift-reduce conflict (shift 13, reduce 61) on MINUS
118: shift-reduce conflict (shift 16, reduce 61) on SEMI
118: shift-reduce conflict (shift 16, reduce 15) on SEMI
118: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 118
	seq : seq . stmt
	if_stmt : IF LP expr RP stmt ELSE BLP seq . BRP
	expr : .  (61)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	BRP  shift 122
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 61

	stmt  goto 51
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


119: shift-reduce conflict (shift 13, reduce 61) on MINUS
119: shift-reduce conflict (shift 16, reduce 61) on SEMI
119: shift-reduce conflict (shift 16, reduce 15) on SEMI
119: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 119
	for_stmt : FOR LP def_stmt SEMI expr SEMI nosemi_stmt RP . stmt
	for_stmt : FOR LP def_stmt SEMI expr SEMI nosemi_stmt RP . BLP seq BRP
	expr : .  (61)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	BLP  shift 123
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 61

	stmt  goto 124
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


120: shift-reduce conflict (shift 13, reduce 61) on MINUS
120: shift-reduce conflict (shift 16, reduce 61) on SEMI
120: shift-reduce conflict (shift 7, reduce 4) on NUMBER_I
120: shift-reduce conflict (shift 8, reduce 4) on NUMBER_D
120: shift-reduce conflict (shift 9, reduce 4) on ID
120: shift-reduce conflict (shift 10, reduce 4) on IF
120: shift-reduce conflict (shift 11, reduce 4) on FOR
120: shift-reduce conflict (shift 12, reduce 4) on WHILE
120: reduce-reduce conflict (reduce 4, reduce 61) on PLUS
120: shift-reduce conflict (shift 13, reduce 4) on MINUS
120: reduce-reduce conflict (reduce 4, reduce 61) on TIMES
120: reduce-reduce conflict (reduce 4, reduce 61) on OVER
120: reduce-reduce conflict (reduce 4, reduce 61) on MODU
120: reduce-reduce conflict (reduce 4, reduce 61) on CAND
120: reduce-reduce conflict (reduce 4, reduce 61) on COR
120: reduce-reduce conflict (reduce 4, reduce 61) on XOR
120: shift-reduce conflict (shift 14, reduce 4) on BN
120: reduce-reduce conflict (reduce 4, reduce 61) on LS
120: reduce-reduce conflict (reduce 4, reduce 61) on RS
120: shift-reduce conflict (shift 15, reduce 4) on LP
120: shift-reduce conflict (shift 16, reduce 4) on SEMI
120: reduce-reduce conflict (reduce 4, reduce 61) on EQUAL
120: reduce-reduce conflict (reduce 4, reduce 61) on LARGE
120: reduce-reduce conflict (reduce 4, reduce 61) on LESS
120: reduce-reduce conflict (reduce 4, reduce 61) on UNEQ
120: reduce-reduce conflict (reduce 4, reduce 61) on AND
120: reduce-reduce conflict (reduce 4, reduce 61) on OR
120: shift-reduce conflict (shift 17, reduce 4) on NOT
120: reduce-reduce conflict (reduce 4, reduce 61) on LAE
120: reduce-reduce conflict (reduce 4, reduce 61) on LEE
120: shift-reduce conflict (shift 18, reduce 4) on INT
120: shift-reduce conflict (shift 19, reduce 4) on DOUBLE
120: shift-reduce conflict (shift 20, reduce 4) on CHAR
120: shift-reduce conflict (shift 21, reduce 4) on CHARACTER
120: shift-reduce conflict (shift 22, reduce 4) on PRINT
120: shift-reduce conflict (shift 23, reduce 4) on INPUT
120: shift-reduce conflict (shift 16, reduce 15) on SEMI
120: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 120
	if_stmt : IF LP expr RP BLP seq BRP ELSE BLP . seq BRP
	expr : .  (61)
	seq : .  (4)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 4

	stmt  goto 24
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	seq  goto 125
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


state 121
	if_stmt : IF LP expr RP BLP seq BRP ELSE stmt .  (23)

	.  reduce 23


state 122
	if_stmt : IF LP expr RP stmt ELSE BLP seq BRP .  (24)

	.  reduce 24


123: shift-reduce conflict (shift 13, reduce 61) on MINUS
123: shift-reduce conflict (shift 16, reduce 61) on SEMI
123: shift-reduce conflict (shift 7, reduce 4) on NUMBER_I
123: shift-reduce conflict (shift 8, reduce 4) on NUMBER_D
123: shift-reduce conflict (shift 9, reduce 4) on ID
123: shift-reduce conflict (shift 10, reduce 4) on IF
123: shift-reduce conflict (shift 11, reduce 4) on FOR
123: shift-reduce conflict (shift 12, reduce 4) on WHILE
123: reduce-reduce conflict (reduce 4, reduce 61) on PLUS
123: shift-reduce conflict (shift 13, reduce 4) on MINUS
123: reduce-reduce conflict (reduce 4, reduce 61) on TIMES
123: reduce-reduce conflict (reduce 4, reduce 61) on OVER
123: reduce-reduce conflict (reduce 4, reduce 61) on MODU
123: reduce-reduce conflict (reduce 4, reduce 61) on CAND
123: reduce-reduce conflict (reduce 4, reduce 61) on COR
123: reduce-reduce conflict (reduce 4, reduce 61) on XOR
123: shift-reduce conflict (shift 14, reduce 4) on BN
123: reduce-reduce conflict (reduce 4, reduce 61) on LS
123: reduce-reduce conflict (reduce 4, reduce 61) on RS
123: shift-reduce conflict (shift 15, reduce 4) on LP
123: shift-reduce conflict (shift 16, reduce 4) on SEMI
123: reduce-reduce conflict (reduce 4, reduce 61) on EQUAL
123: reduce-reduce conflict (reduce 4, reduce 61) on LARGE
123: reduce-reduce conflict (reduce 4, reduce 61) on LESS
123: reduce-reduce conflict (reduce 4, reduce 61) on UNEQ
123: reduce-reduce conflict (reduce 4, reduce 61) on AND
123: reduce-reduce conflict (reduce 4, reduce 61) on OR
123: shift-reduce conflict (shift 17, reduce 4) on NOT
123: reduce-reduce conflict (reduce 4, reduce 61) on LAE
123: reduce-reduce conflict (reduce 4, reduce 61) on LEE
123: shift-reduce conflict (shift 18, reduce 4) on INT
123: shift-reduce conflict (shift 19, reduce 4) on DOUBLE
123: shift-reduce conflict (shift 20, reduce 4) on CHAR
123: shift-reduce conflict (shift 21, reduce 4) on CHARACTER
123: shift-reduce conflict (shift 22, reduce 4) on PRINT
123: shift-reduce conflict (shift 23, reduce 4) on INPUT
123: shift-reduce conflict (shift 16, reduce 15) on SEMI
123: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 123
	for_stmt : FOR LP def_stmt SEMI expr SEMI nosemi_stmt RP BLP . seq BRP
	expr : .  (61)
	seq : .  (4)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 4

	stmt  goto 24
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	seq  goto 126
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


state 124
	for_stmt : FOR LP def_stmt SEMI expr SEMI nosemi_stmt RP stmt .  (30)

	.  reduce 30


125: shift-reduce conflict (shift 13, reduce 61) on MINUS
125: shift-reduce conflict (shift 16, reduce 61) on SEMI
125: shift-reduce conflict (shift 16, reduce 15) on SEMI
125: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 125
	seq : seq . stmt
	if_stmt : IF LP expr RP BLP seq BRP ELSE BLP seq . BRP
	expr : .  (61)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	BRP  shift 127
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 61

	stmt  goto 51
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


126: shift-reduce conflict (shift 13, reduce 61) on MINUS
126: shift-reduce conflict (shift 16, reduce 61) on SEMI
126: shift-reduce conflict (shift 16, reduce 15) on SEMI
126: shift-reduce conflict (shift 16, reduce 20) on SEMI
state 126
	seq : seq . stmt
	for_stmt : FOR LP def_stmt SEMI expr SEMI nosemi_stmt RP BLP seq . BRP
	expr : .  (61)
	nosemi_stmt : .  (15)
	def_stmt : .  (20)

	NUMBER_I  shift 7
	NUMBER_D  shift 8
	ID  shift 9
	IF  shift 10
	FOR  shift 11
	WHILE  shift 12
	MINUS  shift 13
	BN  shift 14
	LP  shift 15
	BRP  shift 128
	SEMI  shift 16
	NOT  shift 17
	INT  shift 18
	DOUBLE  shift 19
	CHAR  shift 20
	CHARACTER  shift 21
	PRINT  shift 22
	INPUT  shift 23
	.  reduce 61

	stmt  goto 51
	if_stmt  goto 25
	def_stmt  goto 26
	for_stmt  goto 27
	while_stmt  goto 29
	assign_stmt  goto 30
	expr  goto 31
	nosemi_stmt  goto 32


state 127
	if_stmt : IF LP expr RP BLP seq BRP ELSE BLP seq BRP .  (26)

	.  reduce 26


state 128
	for_stmt : FOR LP def_stmt SEMI expr SEMI nosemi_stmt RP BLP seq BRP .  (31)

	.  reduce 31


##############################################################################
# Summary
##############################################################################

State 6 contains 21 shift-reduce conflict(s)
State 6 contains 17 reduce-reduce conflict(s)
State 9 contains 2 reduce-reduce conflict(s)
State 13 contains 1 shift-reduce conflict(s)
State 14 contains 1 shift-reduce conflict(s)
State 15 contains 1 shift-reduce conflict(s)
State 17 contains 1 shift-reduce conflict(s)
State 28 contains 4 shift-reduce conflict(s)
State 30 contains 2 reduce-reduce conflict(s)
State 35 contains 1 shift-reduce conflict(s)
State 36 contains 1 shift-reduce conflict(s)
State 38 contains 1 shift-reduce conflict(s)
State 40 contains 1 shift-reduce conflict(s)
State 41 contains 18 shift-reduce conflict(s)
State 43 contains 1 shift-reduce conflict(s)
State 48 contains 1 shift-reduce conflict(s)
State 53 contains 1 shift-reduce conflict(s)
State 54 contains 1 shift-reduce conflict(s)
State 55 contains 1 shift-reduce conflict(s)
State 56 contains 1 shift-reduce conflict(s)
State 57 contains 1 shift-reduce conflict(s)
State 58 contains 1 shift-reduce conflict(s)
State 59 contains 1 shift-reduce conflict(s)
State 60 contains 1 shift-reduce conflict(s)
State 63 contains 1 shift-reduce conflict(s)
State 64 contains 1 shift-reduce conflict(s)
State 65 contains 1 shift-reduce conflict(s)
State 66 contains 1 shift-reduce conflict(s)
State 67 contains 1 shift-reduce conflict(s)
State 68 contains 1 shift-reduce conflict(s)
State 69 contains 1 shift-reduce conflict(s)
State 70 contains 1 shift-reduce conflict(s)
State 80 contains 1 shift-reduce conflict(s)
State 81 contains 1 shift-reduce conflict(s)
State 82 contains 1 shift-reduce conflict(s)
State 83 contains 1 shift-reduce conflict(s)
State 84 contains 1 shift-reduce conflict(s)
State 85 contains 1 shift-reduce conflict(s)
State 86 contains 1 shift-reduce conflict(s)
State 87 contains 1 shift-reduce conflict(s)
State 88 contains 1 shift-reduce conflict(s)
State 91 contains 1 shift-reduce conflict(s)
State 92 contains 1 shift-reduce conflict(s)
State 93 contains 1 shift-reduce conflict(s)
State 94 contains 1 shift-reduce conflict(s)
State 95 contains 1 shift-reduce conflict(s)
State 96 contains 1 shift-reduce conflict(s)
State 97 contains 1 shift-reduce conflict(s)
State 98 contains 1 shift-reduce conflict(s)
State 99 contains 4 shift-reduce conflict(s)
State 100 contains 1 shift-reduce conflict(s)
State 104 contains 21 shift-reduce conflict(s)
State 104 contains 17 reduce-reduce conflict(s)
State 105 contains 1 shift-reduce conflict(s)
State 107 contains 21 shift-reduce conflict(s)
State 107 contains 17 reduce-reduce conflict(s)
State 108 contains 4 shift-reduce conflict(s)
State 109 contains 4 shift-reduce conflict(s)
State 110 contains 1 shift-reduce conflict(s)
State 110 contains 2 reduce-reduce conflict(s)
State 111 contains 4 shift-reduce conflict(s)
State 112 contains 1 shift-reduce conflict(s)
State 113 contains 21 shift-reduce conflict(s)
State 113 contains 17 reduce-reduce conflict(s)
State 117 contains 4 shift-reduce conflict(s)
State 118 contains 4 shift-reduce conflict(s)
State 119 contains 4 shift-reduce conflict(s)
State 120 contains 21 shift-reduce conflict(s)
State 120 contains 17 reduce-reduce conflict(s)
State 123 contains 21 shift-reduce conflict(s)
State 123 contains 17 reduce-reduce conflict(s)
State 125 contains 4 shift-reduce conflict(s)
State 126 contains 4 shift-reduce conflict(s)


45 token(s), 11 nonterminal(s)
62 grammar rule(s), 129 state(s)


##############################################################################
# End of File
##############################################################################
