/*
 * FUN_004a86e0 at 004a86e0
 * undefined FUN_004a86e0(void)
 * Address ranges: 004a86e0-004a87d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004a86e0(int *param_1,int param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int *piStack_2c;
  char *local_28;
  char local_15;
  undefined1 *local_14;
  undefined1 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pcVar1 = param_3;
  puStack_8 = &LAB_0062dca8;
  pvStack_c = ExceptionList;
  local_14 = (undefined1 *)&local_28;
  local_28 = param_3;
  ExceptionList = &pvStack_c;
  if (param_3 != (char *)0x0) {
    ExceptionList = &pvStack_c;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  }
  local_10 = (undefined1 *)&piStack_2c;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  piStack_2c = param_1;
  FUN_00449760(&param_2);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0049c1b0();
  if (pcVar1 != (char *)0x0) {
    if (param_1[0xc2] != 0) {
      local_10 = (undefined1 *)&local_28;
      local_28 = pcVar1;
      *(int *)(pcVar1 + 0x14) = *(int *)(pcVar1 + 0x14) + 1;
      piStack_2c = (int *)0x4a875c;
      FUN_004a9100();
    }
    local_28 = (char *)0x4a8763;
    FUN_0049c5a0();
    local_28 = &local_15;
    local_15 = '\0';
    piStack_2c = (int *)0x4a8773;
    (**(code **)(*param_1 + 0x7c))();
    if (local_15 != '\0') {
      local_28 = (char *)0x4a8780;
      FUN_004fb080();
    }
  }
  local_4 = local_4 & 0xffffff00;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar2;
    if (iVar2 == 0) {
      local_28 = (char *)0x0;
      piStack_2c = (int *)0x4a87a3;
      FUN_005abfc0();
    }
    param_2 = 0;
  }
  local_4 = 0xffffffff;
  if ((pcVar1 != (char *)0x0) &&
     (iVar2 = *(int *)(pcVar1 + 0x14), *(int *)(pcVar1 + 0x14) = iVar2 + -1, iVar2 + -1 == 0)) {
    local_28 = (char *)0x0;
    piStack_2c = (int *)0x4a87c4;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

