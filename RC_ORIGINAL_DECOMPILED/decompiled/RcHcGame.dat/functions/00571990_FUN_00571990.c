/*
 * FUN_00571990 at 00571990
 * undefined FUN_00571990(void)
 * Address ranges: 00571990-005719c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00571990(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x1d8);
  iVar2 = 4;
  do {
    puVar1[-1] = *(undefined4 *)(param_1 + 0x174);
    *puVar1 = *(undefined4 *)(param_1 + 0x178);
    puVar1[1] = *(undefined4 *)(param_1 + 0x17c);
    puVar1[2] = *(undefined4 *)(param_1 + 0x180);
    puVar1 = puVar1 + 9;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

