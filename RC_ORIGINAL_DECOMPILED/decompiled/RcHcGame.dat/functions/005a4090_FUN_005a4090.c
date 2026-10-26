/*
 * FUN_005a4090 at 005a4090
 * undefined FUN_005a4090(void)
 * Address ranges: 005a4090-005a415a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x6500d0 slot 2 for .?AVCDaviFloatSetting@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x6500d0 slot 2 for
   .?AVCDaviFloatSetting@@. Original bytes unchanged; names and types still inferred. */

bool __thiscall FUN_005a4090(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ad390(param_2,&param_2);
  if ((char)param_2 != '\0') {
    puVar5 = &DAT_0064a3b4;
    if (*(undefined1 **)(param_1 + 0x54) != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(param_1 + 0x54);
    }
    puVar4 = &DAT_0064a3b4;
    if (*(undefined1 **)(param_1 + 0x38) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(param_1 + 0x38);
    }
    puVar2 = *(undefined1 **)(param_1 + 0x28);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    uVar3 = FUN_005ae390(local_1c,s_Invalid_floating_point_number_fo_006a7d18,puVar2,puVar4,puVar5);
    local_4 = 0;
    FUN_004c4410(s_D__Work_RCHorror_AdamSource_Davi_006a7c20,0x55,uVar3);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return (char)param_2 == '\0';
}

