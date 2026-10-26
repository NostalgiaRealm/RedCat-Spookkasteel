/*
 * FUN_00592b50 at 00592b50
 * undefined FUN_00592b50(void)
 * Address ranges: 00592b50-00592c1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00592b50(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006438f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064ff64;
  iVar2 = 0;
  local_4 = 0;
  if (0 < (int)param_1[0xbb]) {
    puVar3 = param_1 + 5;
    do {
      FUN_0060b25d(*puVar3);
      *puVar3 = 0;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < (int)param_1[0xbb]);
  }
  param_1[0xbb] = 0;
  iVar2 = param_1[0xbf];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  FUN_0060af6c(param_1 + 0x69,0x10,0x14,FUN_00542570);
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

