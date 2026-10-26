/*
 * FUN_004014c8 at 004014c8
 * int * __register FUN_004014c8(void)
 * Address ranges: 004014c8-00401516
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004014c8(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_00573454 == (int *)0x0) {
    puVar1 = LocalAlloc(0,0x644);
    if (puVar1 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    *puVar1 = DAT_00573450;
    iVar3 = 0;
    DAT_00573450 = puVar1;
    do {
      piVar2 = puVar1 + iVar3 * 4 + 1;
      *piVar2 = (int)DAT_00573454;
      iVar3 = iVar3 + 1;
      DAT_00573454 = piVar2;
    } while (iVar3 != 100);
  }
  piVar2 = DAT_00573454;
  DAT_00573454 = (int *)*DAT_00573454;
  return piVar2;
}

