/*
 * FUN_00545554 at 00545554
 * undefined __register FUN_00545554(int * param_1)
 * Address ranges: 00545554-005456df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00545554(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  _union_2683 local_1c;
  undefined4 uStack_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_1c._12_4_ = 0;
  local_1c._8_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._0_4_ = 0;
  puStack_24 = &LAB_005456e0;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uStack_c = 0;
  local_8 = param_1;
  uVar2 = FUN_004f0f10(param_1,param_1[0xcc]);
  if ((char)uVar2 == '\0') goto LAB_005456ca;
  *(undefined1 *)(local_8 + 0xc3) = 0;
  cVar1 = (**(code **)(*(int *)local_8[0xb7] + 0x4c))();
  if (cVar1 == '\0') {
LAB_005455d7:
    cVar1 = (**(code **)(*(int *)local_8[0xb8] + 0x4c))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(int *)local_8[0xb8] + 0xb4))();
      if (cVar1 != '\0') {
        *(undefined1 *)(local_8 + 0xc3) = 2;
        goto LAB_005456c6;
      }
    }
    cVar1 = (**(code **)(*(int *)local_8[0xb9] + 0x4c))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(int *)local_8[0xb9] + 0xb4))();
      if (cVar1 != '\0') {
        *(undefined1 *)(local_8 + 0xc3) = 4;
        piVar3 = (int *)FUN_00494c5c((int *)local_8[0xcc],(byte *)(local_8 + 0xc5));
        cVar1 = (**(code **)(*piVar3 + 0x4c))();
        if (cVar1 == '\0') {
          FUN_00404e28((VARIANT *)(local_8 + 0xce),(VARIANTARG *)PTR_DAT_00572068);
        }
        else {
          piVar3 = (int *)FUN_00494c5c((int *)local_8[0xcc],(byte *)(local_8 + 0xc5));
          FUN_00496550(piVar3,(VARIANT *)&local_1c.n2);
          FUN_00404e28((VARIANT *)(local_8 + 0xce),(VARIANTARG *)&local_1c.n2);
        }
        goto LAB_005456c6;
      }
    }
    FUN_00403d94(" Internal inconsistency");
  }
  else {
    cVar1 = (**(code **)(*(int *)local_8[0xb7] + 0xb4))();
    if (cVar1 == '\0') goto LAB_005455d7;
    *(undefined1 *)(local_8 + 0xc3) = 1;
  }
LAB_005456c6:
  uStack_c = CONCAT13(1,(undefined3)uStack_c);
LAB_005456ca:
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005456e7;
  puStack_24 = (undefined1 *)0x5456df;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  return;
}

