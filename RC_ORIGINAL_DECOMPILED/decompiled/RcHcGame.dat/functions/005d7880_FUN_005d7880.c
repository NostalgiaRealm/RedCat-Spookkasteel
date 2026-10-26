/*
 * FUN_005d7880 at 005d7880
 * undefined FUN_005d7880(void)
 * Address ranges: 005d7880-005d7a18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_005d7880(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_10;
  
  iVar1 = param_1[2];
  iVar2 = *param_1;
  iVar3 = param_1[1] - iVar2;
  param_1[1] = iVar3;
  *param_1 = 0;
  iVar4 = param_1[3] - iVar1;
  param_1[3] = iVar4;
  param_1[2] = 0;
  local_10 = param_4;
  if (param_10 == 1) {
    param_10 = iVar3 / 2;
    local_18 = iVar4 / 2;
  }
  else {
    param_10 = 0;
    local_18 = 0;
  }
  if (param_7 < (iVar3 - param_10) + param_4) {
    param_1[1] = (param_7 - param_4) + param_10;
  }
  if (param_9 < (iVar4 - local_18) + param_5) {
    param_1[3] = (param_9 - param_5) + local_18;
  }
  if (param_4 - param_10 < param_6) {
    local_10 = param_6 + param_10;
    *param_1 = local_10 - param_4;
  }
  iVar3 = param_5;
  if (param_5 - local_18 < param_8) {
    iVar3 = param_8 + local_18;
    param_1[2] = iVar3 - param_5;
  }
  if (param_1[1] <= *param_1) {
    return 0;
  }
  if (param_1[3] <= param_1[2]) {
    return 0;
  }
  *param_2 = local_10 - param_10;
  *param_3 = iVar3 - local_18;
  param_1[1] = param_1[1] + iVar2;
  *param_1 = *param_1 + iVar2;
  param_1[3] = param_1[3] + iVar1;
  param_1[2] = param_1[2] + iVar1;
  return 1;
}

