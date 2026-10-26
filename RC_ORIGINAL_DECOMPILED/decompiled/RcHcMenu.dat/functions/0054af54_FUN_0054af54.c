/*
 * FUN_0054af54 at 0054af54
 * undefined __register FUN_0054af54(byte * param_1, int * param_2, int * param_3, char param_4, char param_5, int param_6)
 * Address ranges: 0054af54-0054b0d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054af54(byte *param_1,int *param_2,int *param_3,char param_4,char param_5,int param_6)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  char cVar5;
  char *pcStack_160;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  byte local_144 [28];
  int local_128;
  int local_124;
  byte local_120 [256];
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  int *local_10;
  int *local_c;
  byte *local_8;
  
  local_124 = 0;
  local_128 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_14c = (undefined1 *)0x54af83;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_150 = &LAB_0054b0d7;
  uStack_154 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_154;
  puStack_14c = &stack0xfffffffc;
  if (local_c == (int *)0x0) {
    puStack_14c = &stack0xfffffffc;
    FUN_00402fe0(**(int **)(param_6 + -4),local_120);
    FUN_00403fd4(&local_20,local_120);
    pcStack_160 = "aAppObj can not be nil";
    FUN_004040f0(&local_1c,3);
    FUN_00403d94(local_1c);
  }
  if (local_10 == (int *)0x0) {
    FUN_00402fe0(**(int **)(param_6 + -4),local_120);
    FUN_00403fd4(&local_128,local_120);
    FUN_004040f0(&local_124,3);
    FUN_00403d94(local_124);
  }
  local_18 = 0;
  local_11 = '\0';
  while( true ) {
    iVar3 = FUN_0048ec24((int)local_10);
    if ((iVar3 <= local_18) || (local_11 != '\0')) break;
    iVar3 = param_6;
    cVar5 = param_4;
    FUN_0048f02c(local_10,local_18,(undefined4 *)local_144);
    piVar1 = (int *)FUN_00494c5c(local_c,local_144);
    uVar2 = FUN_0054ad5c(local_8,piVar1,param_5,cVar5,iVar3);
    local_11 = (char)uVar2;
    bVar4 = SCARRY4(local_18,1);
    local_18 = local_18 + 1;
    if (bVar4) {
      thunk_FUN_00402874(uVar2);
    }
  }
  *in_FS_OFFSET = pcStack_160;
  FUN_00403dd4(&local_128,2);
  FUN_00403dd4(&local_20,2);
  FUN_00403db0((int *)&local_8);
  return;
}

