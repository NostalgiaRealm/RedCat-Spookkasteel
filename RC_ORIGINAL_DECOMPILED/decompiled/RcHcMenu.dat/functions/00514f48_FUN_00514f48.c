/*
 * FUN_00514f48 at 00514f48
 * undefined __register FUN_00514f48(int param_1)
 * Address ranges: 00514f48-0051500c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x51408c slot 0 for TOANumericCombo2Interface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x51408c slot 0 for
   TOANumericCombo2Interface. Original bytes unchanged; names and types still inferred. */

void FUN_00514f48(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  double dVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  _union_2683 local_18;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_18._12_4_ = 0;
  local_18._8_4_ = 0;
  local_18.decVal.Hi32 = 0;
  local_18._0_4_ = 0;
  puStack_20 = &LAB_0051500d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x4c))();
    if (cVar1 == '\0') {
      piVar2 = (int *)FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_0051437c);
      (**(code **)(*piVar2 + 0x138))();
    }
    else {
      cVar1 = (**(code **)(**(int **)(local_8 + 0xc) + 0x50))();
      if (cVar1 == '\0') {
        FUN_00496550(*(int **)(local_8 + 0xc),(VARIANT *)&local_18.n2);
        FUN_004051ec((VARIANTARG *)&local_18.n2);
        dVar3 = (double)in_ST0;
        piVar2 = (int *)FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_0051437c);
        FUN_00513604(piVar2,extraout_EDX,extraout_ECX,SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20)
                    );
      }
      else {
        piVar2 = (int *)FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_0051437c);
        (**(code **)(*piVar2 + 0x138))();
      }
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00515014;
  puStack_20 = (undefined1 *)0x51500c;
  FUN_00405bcc((VARIANTARG *)&local_18.n2);
  return;
}

