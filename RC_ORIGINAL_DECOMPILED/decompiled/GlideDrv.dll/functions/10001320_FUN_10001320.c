/*
 * FUN_10001320 at 10001320
 * undefined4 __cdecl FUN_10001320(int param_1)
 * Address ranges: 10001320-10001361
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10001320(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x80;
  puVar1 = (undefined4 *)(param_1 + 0x134);
  do {
    if (puVar1[1] != 0) {
      if ((undefined *)*puVar1 != (undefined *)0x0) {
        FUN_10003f4c((undefined *)*puVar1);
      }
      *puVar1 = 0;
      puVar1[2] = 0;
    }
    puVar1 = puVar1 + 0xf;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 1;
}

