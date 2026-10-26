/*
 * FUN_006027de at 006027de
 * undefined FUN_006027de(void)
 * Address ranges: 006027de-00602835
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_006027de(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_54 [64];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  uVar1 = FUN_00604051(local_c,0x75,*(undefined4 *)(param_4 + 0xc),param_6);
  uVar1 = FUN_0060d588(local_54,uVar1);
  puVar2 = (undefined4 *)FUN_006040ab(local_14,param_2,param_3,param_4,param_5,local_54,uVar1);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  return;
}

