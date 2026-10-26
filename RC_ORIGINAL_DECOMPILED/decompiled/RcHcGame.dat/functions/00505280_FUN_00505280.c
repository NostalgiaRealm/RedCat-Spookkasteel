/*
 * FUN_00505280 at 00505280
 * undefined FUN_00505280(void)
 * Address ranges: 00505280-0050535b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00505280(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635f38;
  local_c = ExceptionList;
  puVar6 = &DAT_0064a3b4;
  if (*(undefined1 **)(param_3 + 4) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_3 + 4);
  }
  puVar4 = &DAT_0064a3b4;
  if (*(undefined1 **)(param_1 + 0x70) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_1 + 0x70);
  }
  puVar2 = *(undefined1 **)(param_1 + 0x60);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  puVar5 = *(undefined1 **)(param_2 + 4);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  ExceptionList = &local_c;
  FUN_0060a613(param_1,puVar2,puVar4,puVar6);
  uVar3 = FUN_0060b060();
  uVar3 = FUN_005ae390(local_1c,s_Can_t_call_script_event___s__for_0069e148,puVar5,uVar3);
  local_4 = 0;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x40d,uVar3);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}

