/*
 * FUN_005a3ee0 at 005a3ee0
 * undefined FUN_005a3ee0(void)
 * Address ranges: 005a3ee0-005a408f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x6500d0 slot 1 for .?AVCDaviFloatSetting@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x6500d0 slot 1 for
   .?AVCDaviFloatSetting@@. Original bytes unchanged; names and types still inferred. */

undefined1 __fastcall FUN_005a3ee0(int param_1)

{
  float fVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  float10 fVar10;
  undefined1 local_11d;
  undefined1 local_11c [4];
  int local_118;
  undefined4 local_10c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064530b;
  local_c = ExceptionList;
  if (*(float *)(param_1 + 0x60) == 0.0) {
    ExceptionList = &local_c;
    fVar10 = (float10)FUN_005ad390(param_1 + 0x14,&local_11d);
    *(float *)(param_1 + 0x60) = (float)fVar10;
  }
  else {
    fVar10 = (float10)*(float *)(param_1 + 0x60);
    ExceptionList = &local_c;
  }
  if ((float10)*(float *)(param_1 + 0x6c) <= fVar10) {
    if (*(float *)(param_1 + 0x60) == 0.0) {
      fVar10 = (float10)FUN_005ad390(param_1 + 0x14,&local_11d);
      *(float *)(param_1 + 0x60) = (float)fVar10;
    }
    else {
      fVar10 = (float10)*(float *)(param_1 + 0x60);
    }
    if (fVar10 <= (float10)*(float *)(param_1 + 0x70)) {
      ExceptionList = local_c;
      return 1;
    }
    fVar1 = *(float *)(param_1 + 0x70);
    puVar8 = local_10c;
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    FUN_0060af1b(local_10c,0xff,&DAT_0069081c,(double)fVar1);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x6c);
    puVar8 = local_10c;
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    FUN_0060af1b(CONCAT44(0xff,local_10c),&DAT_0069081c,(double)fVar1);
  }
  FUN_005acdb0();
  puVar9 = &DAT_0064a3b4;
  if (*(undefined1 **)(param_1 + 0x54) != (undefined1 *)0x0) {
    puVar9 = *(undefined1 **)(param_1 + 0x54);
  }
  puVar7 = &DAT_0064a3b4;
  if (*(undefined1 **)(param_1 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_1 + 0x38);
  }
  puVar6 = *(undefined1 **)(param_1 + 0x28);
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = &DAT_0064a3b4;
  }
  puVar3 = *(undefined1 **)(param_1 + 0x18);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  uVar4 = FUN_005ae390(local_11c,s_Value_out_of_range___min___f_<__v_006a7cb4,
                       (double)*(float *)(param_1 + 0x6c),puVar3,(double)*(float *)(param_1 + 0x70),
                       puVar6,puVar7,puVar9);
  local_4 = 0;
  FUN_004c4410(s_D__Work_RCHorror_AdamSource_Davi_006a7c20,0x40,uVar4);
  if (local_118 != 0) {
    cVar2 = *(char *)(local_118 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(local_118 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

