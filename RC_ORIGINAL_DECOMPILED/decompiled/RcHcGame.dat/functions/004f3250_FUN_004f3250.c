/*
 * FUN_004f3250 at 004f3250
 * undefined FUN_004f3250(void)
 * Address ranges: 004f3250-004f32d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f3250(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006345d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005658b0(local_1c);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  local_4 = 0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  FUN_005acdb0(puVar3);
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

