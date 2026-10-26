/*
 * FUN_0060fce9 at 0060fce9
 * undefined FUN_0060fce9(void)
 * Address ranges: 0060fce9-0060fd63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060fce9(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,undefined4 *param_8,undefined4 param_9,
                 int param_10)

{
  int iVar1;
  
  if (param_7 != 0) {
    FUN_0060fe9a(param_1,param_2,param_6,param_7);
  }
  if (param_10 == 0) {
    param_10 = param_2;
  }
  FUN_0060a105(param_10,param_1);
  FUN_0060fc4b(param_2,param_4,param_5,*param_8);
  *(int *)(param_2 + 8) = param_8[1] + 1;
  iVar1 = FUN_0060fd64(param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,0x100)
  ;
  if (iVar1 != 0) {
    FUN_0060a0c3(iVar1,param_2);
  }
  return;
}

