/*
 * FUN_0050bf90 at 0050bf90
 * undefined FUN_0050bf90(void)
 * Address ranges: 0050bf90-0050c047
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0050bf90(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 local_40 [4];
  int iStack_3c;
  undefined1 local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636a48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005c3350(local_30);
  if (iVar2 == 0) {
    puVar5 = *(undefined1 **)(param_1 + 0x20);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar3 = FUN_005ae390(local_40,s_geBitmap_GetInfo___fails_for_bit_0069e82c,puVar5);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_0069e554,
                                  0x234,uVar3);
    (*pcVar4)();
    if (iStack_3c != 0) {
      cVar1 = *(char *)(iStack_3c + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_3c + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0((char *)(iStack_3c + -1));
    }
  }
  ExceptionList = local_c;
  return;
}

