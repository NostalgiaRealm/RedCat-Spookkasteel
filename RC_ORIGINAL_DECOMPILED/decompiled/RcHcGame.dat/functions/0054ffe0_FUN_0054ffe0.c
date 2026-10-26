/*
 * FUN_0054ffe0 at 0054ffe0
 * undefined FUN_0054ffe0(void)
 * Address ranges: 0054ffe0-00550254
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00550036) */
/* WARNING: Removing unreachable block (ram,0x00550052) */
/* WARNING: Removing unreachable block (ram,0x00550054) */
/* WARNING: Removing unreachable block (ram,0x0055018c) */
/* WARNING: Removing unreachable block (ram,0x0055019d) */

int * __thiscall
FUN_0054ffe0(int param_1,int *param_2,undefined1 **param_3,undefined4 param_4,undefined1 *param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  int *piStack_44;
  undefined1 *puStack_40;
  int local_2c;
  int local_28;
  int local_24 [2];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063dce7;
  pvStack_c = ExceptionList;
  local_24[1] = 0;
  local_2c = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  puStack_40 = (undefined1 *)0x550015;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_00553640();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x8c) != '\0')) {
    local_4._0_1_ = 2;
    local_28 = 0;
    piStack_44 = local_24;
    puStack_40 = (undefined1 *)param_3;
    puStack_48 = (undefined1 *)0x5500ab;
    piVar2 = (int *)FUN_00551bd0();
    local_4._0_1_ = 4;
    if (local_28 != *piVar2) {
      if ((local_28 != 0) &&
         (iVar3 = *(int *)(local_28 + 0x14) + -1, *(int *)(local_28 + 0x14) = iVar3, iVar3 == 0)) {
        puStack_40 = (undefined1 *)0x0;
        piStack_44 = (int *)0x5500d5;
        FUN_005abfc0();
      }
      local_28 = *piVar2;
      puStack_40 = (undefined1 *)0x5500e4;
      FUN_005844b0();
    }
    local_4._0_1_ = 2;
    if (local_24[0] != 0) {
      puStack_40 = (undefined1 *)0x5500fa;
      FUN_004098d0();
    }
    if (local_28 == 0) {
      puStack_40 = (undefined1 *)0x550109;
      puStack_40 = (undefined1 *)FUN_005a2cf0();
      puStack_48 = local_1c;
      piStack_44 = (int *)s_Couldn_t_get_create_sound_def__s_006a1b1c;
      uStack_4c = 0x550119;
      uStack_4c = FUN_005ae390();
      puStack_50 = (undefined1 *)0x29c;
      local_4._0_1_ = 5;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a1798);
      local_4._0_1_ = 2;
      puStack_40 = (undefined1 *)0x1;
      piStack_44 = (int *)0x550141;
      FUN_004040a0();
    }
    else {
      puStack_40 = (undefined1 *)param_7;
      piStack_44 = (int *)param_6;
      puStack_48 = param_5;
      uStack_4c = param_4;
      param_3 = &puStack_50;
      puStack_50 = param_5;
      FUN_00449760(&local_28);
      piVar2 = (int *)FUN_0054f240(&param_3);
      if (*piVar2 != 0) {
        local_4._0_1_ = 6;
        local_2c = *piVar2;
        puStack_40 = (undefined1 *)0x5501b2;
        FUN_005844b0();
      }
      local_4._0_1_ = 2;
      if ((param_3 != (undefined1 **)0x0) &&
         (iVar3 = *(int *)((int)param_3 + 0x14), *(int *)((int)param_3 + 0x14) = iVar3 + -1,
         iVar3 + -1 == 0)) {
        puStack_40 = (undefined1 *)0x0;
        piStack_44 = (int *)0x5501d8;
        FUN_005abfc0();
      }
    }
    local_4._0_1_ = 1;
    if ((local_28 != 0) &&
       (iVar3 = *(int *)(local_28 + 0x14) + -1, *(int *)(local_28 + 0x14) = iVar3, iVar3 == 0)) {
      puStack_40 = (undefined1 *)0x0;
      piStack_44 = (int *)0x5501fe;
      FUN_005abfc0();
    }
  }
  *param_2 = local_2c;
  if (local_2c != 0) {
    *(int *)(local_2c + 0x14) = *(int *)(local_2c + 0x14) + 1;
  }
  local_24[1] = 1;
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_2c != 0) &&
     (iVar3 = *(int *)(local_2c + 0x14) + -1, *(int *)(local_2c + 0x14) = iVar3, iVar3 == 0)) {
    puStack_40 = (undefined1 *)0x0;
    piStack_44 = (int *)0x55023e;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return param_2;
}

