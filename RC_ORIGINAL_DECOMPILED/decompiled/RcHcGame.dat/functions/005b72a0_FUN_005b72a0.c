/*
 * FUN_005b72a0 at 005b72a0
 * undefined FUN_005b72a0(void)
 * Address ranges: 005b72a0-005b72e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_005b72a0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_005d1b10();
  *param_3 = uVar1;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x38) + param_2 * 0x10);
  *param_4 = *puVar2;
  *param_5 = puVar2[1];
  *param_6 = puVar2[2];
  *param_7 = puVar2[3];
  return 1;
}

