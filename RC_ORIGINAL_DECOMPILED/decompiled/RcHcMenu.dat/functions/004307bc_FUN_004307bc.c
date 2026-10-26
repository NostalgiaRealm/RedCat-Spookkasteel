/*
 * FUN_004307bc at 004307bc
 * undefined4 __register FUN_004307bc(void)
 * Address ranges: 004307bc-0043084e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004307bc(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  piVar1 = *(int **)(DAT_00573760 + 4);
  if ((((piVar1 != (int *)0x0) && ((char)piVar1[0x5f] != '\0')) && (piVar1[0x50] != 0)) &&
     (iVar2 = FUN_00437280((int)piVar1), iVar2 != 0)) {
    iVar2 = FUN_00437280((int)piVar1);
    if ((iVar2 == 1) &&
       (iVar2 = FUN_00412384((undefined4 *)piVar1[0x50],0), iVar2 == *(int *)(DAT_00573760 + 0x38)))
    {
      return 0;
    }
    piVar3 = FUN_00431178((POINT *)(DAT_00573760 + 0xc),0);
    while( true ) {
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      if (piVar1 == piVar3) {
        return 0;
      }
      iVar2 = FUN_004123e0(piVar1[0x50],(int)piVar3);
      if (iVar2 != -1) break;
      piVar3 = (int *)piVar3[9];
    }
    uVar4 = FUN_00437294((int)piVar1,iVar2);
  }
  return uVar4;
}

