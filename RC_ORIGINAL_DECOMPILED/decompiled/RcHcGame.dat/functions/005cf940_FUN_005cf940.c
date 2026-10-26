/*
 * FUN_005cf940 at 005cf940
 * undefined FUN_005cf940(void)
 * Address ranges: 005cf940-005cf99f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005cf940(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_005cf910(param_1,param_2);
  FUN_005b55e0();
  *(undefined4 *)(iVar1 + 0x80) = 1;
  puVar3 = (undefined4 *)(iVar1 + 0x34);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x58);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x5c);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x60);
  FUN_005cf6a0();
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}

