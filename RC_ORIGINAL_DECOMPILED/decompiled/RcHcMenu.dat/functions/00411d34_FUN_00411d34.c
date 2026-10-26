/*
 * FUN_00411d34 at 00411d34
 * undefined __register FUN_00411d34(void)
 * Address ranges: 00411d34-00411d93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00411d34(void)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  pvVar2 = FUN_00407904();
  if (*(int *)((int)pvVar2 + 0xc) == 0) {
    uVar3 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX);
    pvVar2 = FUN_00407904();
    *(undefined4 *)((int)pvVar2 + 0xc) = uVar3;
  }
  pvVar2 = FUN_00407904();
  iVar1 = *(int *)((int)pvVar2 + 8);
  pvVar2 = FUN_00407904();
  FUN_004121d8(*(int **)((int)pvVar2 + 0xc),iVar1);
  uVar3 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX_00);
  pvVar2 = FUN_00407904();
  *(undefined4 *)((int)pvVar2 + 8) = uVar3;
  return;
}

