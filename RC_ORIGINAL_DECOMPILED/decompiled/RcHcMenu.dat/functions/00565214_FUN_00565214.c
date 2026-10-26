/*
 * FUN_00565214 at 00565214
 * undefined __register FUN_00565214(undefined4 param_1)
 * Address ranges: 00565214-0056542f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00565214(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  puStack_18 = &LAB_00565430;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_8 = param_1;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,(undefined4 *)"StartUp",0);
  iVar3 = FUN_005651fc();
  if (iVar3 == 7) {
    *(undefined1 *)(*(int *)PTR_DAT_00572108 + 0x100) = 0;
    FUN_005699f0(*(int **)PTR_DAT_00572108);
  }
  else {
    *(undefined1 *)(*(int *)PTR_DAT_00572108 + 0x100) =
         *(undefined1 *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 9);
    cVar1 = *(char *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 9);
    if (cVar1 == '\0') {
      FUN_005649dc(local_8);
      FUN_00564b8c(local_8);
      FUN_0054f644(*(int **)(*(int *)PTR_DAT_00572108 + 0x108),
                   *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x18));
      piVar4 = (int *)FUN_00552264((int)&PTR_FUN_005601a8);
      piVar4 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_005601a8);
      (**(code **)(*piVar4 + 0xf0))();
    }
    else if (cVar1 == '\x01') {
      FUN_00569170(*(int **)PTR_DAT_00572108,
                   *(undefined4 *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 0x28));
      FUN_0054f644(*(int **)(*(int *)PTR_DAT_00572108 + 0x108),
                   *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x18));
      piVar4 = (int *)FUN_00552264((int)&PTR_FUN_005601a8);
      piVar4 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_005601a8);
      (**(code **)(*piVar4 + 0xf0))();
    }
    else if (cVar1 == '\x02') {
      FUN_00569170(*(int **)PTR_DAT_00572108,
                   *(undefined4 *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 0x28));
      FUN_00564eec(local_8);
      FUN_0054f644(*(int **)(*(int *)PTR_DAT_00572108 + 0x108),
                   *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x18));
      piVar4 = (int *)FUN_00552264((int)&PTR_FUN_005601a8);
      piVar4 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_005601a8);
      (**(code **)(*piVar4 + 0xf0))();
    }
    else {
      FUN_00409bd8((uint)*(byte *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 9),(int *)&local_10)
      ;
      FUN_0040407c(&local_c,(undefined4 *)"illegal value of Previous : ",local_10);
      iVar3 = local_c;
      iVar5 = FUN_004a418c();
      FUN_004a4bf4(iVar5,iVar3);
    }
  }
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00565437;
  puStack_18 = (undefined1 *)0x56542f;
  FUN_00403dd4((int *)&local_10,2);
  return;
}

