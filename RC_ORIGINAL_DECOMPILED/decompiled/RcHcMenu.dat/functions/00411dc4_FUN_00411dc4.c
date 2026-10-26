/*
 * FUN_00411dc4 at 00411dc4
 * undefined __register FUN_00411dc4(void)
 * Address ranges: 00411dc4-00411e35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00411dc4(void)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = FUN_00407904();
  FUN_00403094(*(int **)((int)pvVar2 + 8));
  pvVar2 = FUN_00407904();
  uVar3 = FUN_0041246c(*(undefined4 **)((int)pvVar2 + 0xc));
  pvVar2 = FUN_00407904();
  *(undefined4 *)((int)pvVar2 + 8) = uVar3;
  pvVar2 = FUN_00407904();
  iVar1 = *(int *)(*(int *)((int)pvVar2 + 0xc) + 8);
  pvVar2 = FUN_00407904();
  FUN_00412224(*(int **)((int)pvVar2 + 0xc),iVar1 + -1);
  pvVar2 = FUN_00407904();
  if (*(int *)(*(int *)((int)pvVar2 + 0xc) + 8) == 0) {
    pvVar2 = FUN_00407904();
    FUN_0040e4b4((undefined4 *)((int)pvVar2 + 0xc));
  }
  return;
}

