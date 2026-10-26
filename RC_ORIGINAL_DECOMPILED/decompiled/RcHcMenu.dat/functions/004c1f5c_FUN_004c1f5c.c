/*
 * FUN_004c1f5c at 004c1f5c
 * undefined __register FUN_004c1f5c(int * param_1, int param_2)
 * Address ranges: 004c1f5c-004c201d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 21 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 21 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004c1f5c(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd8;
  undefined1 *apuStack_20 [2];
  undefined1 *local_18;
  
  local_18 = &stack0xfffffffc;
  iVar5 = 4;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  apuStack_20[1] = &LAB_004c201e;
  apuStack_20[0] = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = apuStack_20;
  piVar2 = (int *)FUN_004cfda8(param_1,param_2);
  iVar5 = FUN_00403224(piVar2,(int)&DAT_004bcb7c);
  if (*(int *)(iVar5 + 4) == 0) {
    in_stack_ffffffd8 = PTR_DAT_005725ac;
    uVar4 = PTR_DAT_005725ac;
    piVar3 = (int *)FUN_00497394(PTR_DAT_005725ac,extraout_EDX,extraout_ECX);
    iVar5 = FUN_0049756c(piVar3,param_2);
    FUN_004045b8((BSTR)&local_18,*(LPCSTR *)(iVar5 + 0x3c));
    puVar1 = local_18;
    FUN_004053dc((VARIANTARG *)&stack0xffffffd8,1);
    uVar4 = FUN_004b9204(param_1[0x14],puVar1,&stack0xffffffd8,(VARIANTARG *)in_stack_ffffffd8,
                         (VARIANTARG *)uVar4);
    iVar5 = FUN_00403224(piVar2,(int)&DAT_004bcb7c);
    *(undefined4 *)(iVar5 + 4) = uVar4;
  }
  *in_FS_OFFSET = in_stack_ffffffd8;
  apuStack_20[0] = &LAB_004c2025;
  FUN_00405bcc((VARIANTARG *)&stack0xffffffd8);
  FUN_00404474(&local_18);
  return;
}

