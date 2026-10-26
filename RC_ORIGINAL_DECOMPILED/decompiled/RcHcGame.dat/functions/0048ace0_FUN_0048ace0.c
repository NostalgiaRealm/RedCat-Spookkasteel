/*
 * FUN_0048ace0 at 0048ace0
 * undefined FUN_0048ace0(void)
 * Address ranges: 0048ace0-0048adc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e4c4 slot 14 for .?AVCRcGStateRESTART@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e4c4 slot 14 for
   .?AVCRcGStateRESTART@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0048ace0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 uStack_3c;
  float local_38;
  float fStack_34;
  undefined1 local_28 [12];
  undefined1 local_1c [28];
  
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  local_38 = *(float *)(iVar2 + 0x58);
LAB_0048ad02:
  FUN_005aaca0();
  cVar1 = FUN_005a9c30(local_1c);
  if (cVar1 == '\0') {
    return;
  }
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  FUN_0060a6f2(iVar2,0,&CAdamApplication::RTTI_Type_Descriptor,&CRCApplication::RTTI_Type_Descriptor
               ,1);
  piVar3 = (int *)FUN_00492360();
  pfVar4 = (float *)(**(code **)(*piVar3 + 4))(local_28,(int)&uStack_3c + 3);
  uStack_3c = *pfVar4;
  local_38 = pfVar4[1];
  fStack_34 = pfVar4[2];
  if (0.0 <= uStack_3c) {
    if (0.0 < uStack_3c) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = 1;
  }
  cVar1 = (**(code **)(*piVar3 + 0xc))();
  if (cVar1 == '\0') goto code_r0x0048adac;
  goto LAB_0048adbb;
code_r0x0048adac:
  cVar1 = (**(code **)(*piVar3 + 0x10))();
  if (cVar1 != '\0') {
LAB_0048adbb:
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  goto LAB_0048ad02;
}

