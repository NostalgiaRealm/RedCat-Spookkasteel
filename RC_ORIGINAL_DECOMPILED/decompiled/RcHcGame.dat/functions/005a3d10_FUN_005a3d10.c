/*
 * FUN_005a3d10 at 005a3d10
 * undefined FUN_005a3d10(void)
 * Address ranges: 005a3d10-005a3ed1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005a3d10(undefined4 *param_1,int param_2,undefined4 param_3,float param_4,float param_5,
            float param_6,undefined4 param_7)

{
  char cVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 local_11c [4];
  int iStack_118;
  undefined4 local_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006452f6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ac260();
  param_1[0x1b] = param_5;
  param_1[0x1c] = param_6;
  local_4 = 0;
  *param_1 = &PTR_FUN_006500d0;
  FUN_005ac5c0(param_2,param_3,param_7);
  if (((param_6 < param_5) || (param_4 < param_5)) || (param_6 < param_4)) {
    puVar6 = &DAT_0064a3b4;
    if ((undefined1 *)param_1[0x15] != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)param_1[0x15];
    }
    puVar4 = &DAT_0064a3b4;
    if ((undefined1 *)param_1[0xe] != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)param_1[0xe];
    }
    puVar2 = *(undefined1 **)(param_2 + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    FUN_005ae390(local_11c,s_CDaviFloatSetting____invalid_ran_006a7c54,(double)param_5,
                 (double)param_4,(double)param_6,puVar2,puVar4,puVar6);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0();
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    if (iStack_118 != 0) {
      cVar1 = *(char *)(iStack_118 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(iStack_118 + -1) = cVar1 + -1;
      }
    }
  }
  puVar7 = local_10c;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  FUN_0060af1b(CONCAT44(0xff,local_10c),&DAT_0069081c,(double)param_4);
  FUN_005acdb0();
  FUN_005ad000();
  ExceptionList = pvStack_c;
  return param_1;
}

