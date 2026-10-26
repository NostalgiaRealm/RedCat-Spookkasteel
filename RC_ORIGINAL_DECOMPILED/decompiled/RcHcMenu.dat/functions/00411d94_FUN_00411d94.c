/*
 * FUN_00411d94 at 00411d94
 * undefined __register FUN_00411d94(void)
 * Address ranges: 00411d94-00411dc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00411d94(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  pvVar2 = FUN_00407904();
  puVar1 = *(undefined4 **)((int)pvVar2 + 8);
  iVar4 = puVar1[2];
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      piVar3 = (int *)FUN_00412384(puVar1,iVar5);
      (**(code **)(*piVar3 + 0xc))();
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

