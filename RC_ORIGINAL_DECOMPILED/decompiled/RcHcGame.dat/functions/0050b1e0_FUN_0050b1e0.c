/*
 * FUN_0050b1e0 at 0050b1e0
 * undefined FUN_0050b1e0(void)
 * Address ranges: 0050b1e0-0050b2c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0050b1e0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636868;
  local_c = ExceptionList;
  param_3 = param_3 & 0xff;
  ExceptionList = &local_c;
  FUN_0050aa70(param_2,param_3);
  iVar2 = FUN_005c3cf0(param_2,param_3);
  if (iVar2 == 0) {
    iVar3 = FUN_00556560();
    puVar4 = *(undefined1 **)(iVar3 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_1c,s_geBitmap_SetColorKey___fails_for_0069e6c0,puVar4);
    local_4 = 0;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069e554,0x8d,uVar5);
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
  FUN_0050bf90();
  ExceptionList = local_c;
  return iVar2 != 0;
}

