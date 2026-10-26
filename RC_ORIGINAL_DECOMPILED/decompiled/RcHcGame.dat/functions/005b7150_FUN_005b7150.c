/*
 * FUN_005b7150 at 005b7150
 * undefined FUN_005b7150(void)
 * Address ranges: 005b7150-005b7191
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_005b7150(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x2c) + 0x18 + param_2 * 0x4c);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_4 = *puVar3;
    puVar3 = puVar3 + 1;
    param_4 = param_4 + 1;
  }
  *param_5 = (int)*(short *)(*(int *)(param_1 + 0x2c) + 0x48 + param_2 * 0x4c);
  uVar1 = FUN_005d1b10();
  *param_3 = uVar1;
  return;
}

