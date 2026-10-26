/*
 * FUN_004b40e0 at 004b40e0
 * undefined FUN_004b40e0(void)
 * Address ranges: 004b40e0-004b421f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64eb84 slot 21 for .?AVCAdamTextureBitmapScrollAnimator@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64eb84 slot 21 for
   .?AVCAdamTextureBitmapScrollAnimator@@. Original bytes unchanged; names and types still inferred.
    */

void __fastcall FUN_004b40e0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 local_4c;
  undefined4 local_48;
  void *pvStack_44;
  undefined1 local_40 [4];
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062eac3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004e2710();
  FUN_004cffd0();
  iVar2 = FUN_005c3350(0);
  if (iVar2 == 0) {
    uVar3 = FUN_005ae390(local_40,s_geBitmap_GetInfo___fails___00696e9c);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_00696e68,0x24
                                  ,uVar3);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (iStack_3c != 0) {
      cVar1 = *(char *)(iStack_3c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_3c + -1));
      }
      else {
        *(char *)(iStack_3c + -1) = cVar1 + -1;
      }
    }
    iStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
  }
  FUN_004b95a0(&local_48,&local_4c);
  pvStack_44 = operator_new(0x8c);
  local_4 = 1;
  if (pvStack_44 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004b35a0(0,param_1 + 0x5c,param_1 + 0x178,uStack_2c,local_30,
                         *(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174),local_48,
                         local_4c,0,0);
  }
  local_4 = 0xffffffff;
  FUN_004ad2e0(uVar3);
  FUN_004ad9a0(100,0xffffffff);
  ExceptionList = pvStack_c;
  return;
}

