/*
 * FUN_00404ee0 at 00404ee0
 * undefined FUN_00404ee0(void)
 * Address ranges: 00404ee0-00404f84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00404ee0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061fde3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x30);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    FUN_0040a720(uVar3);
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar2[0xb] = uVar3;
    *puVar2 = &PTR_FUN_0064a57c;
    FUN_0040e390(0);
    FUN_00423700();
    cVar1 = FUN_004a0640();
    if (cVar1 != '\0') {
      uVar3 = 0;
      FUN_00423700(0);
      FUN_004a0bb0(uVar3);
    }
  }
  local_4 = 0xffffffff;
  FUN_00402a10(1,puVar2);
  ExceptionList = local_c;
  return;
}

