/*
 * FUN_00472814 at 00472814
 * undefined __register FUN_00472814(int param_1, char param_2, int param_3)
 * Address ranges: 00472814-00472835;0047285e-00472926
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00472814(int param_1,char param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  switch(param_2) {
  case '\0':
    if ((*(char *)(param_3 + 0x36) == '\0') || (*(char *)(param_3 + 0x36) == '\x03')) {
      FUN_00471178(param_1,1);
    }
    FUN_00472660();
    break;
  case '\x02':
  case '\x03':
    FUN_00472700();
    break;
  case '\x04':
  case '\t':
    *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x35) = 0;
    break;
  case '\a':
    FUN_004727c4();
    break;
  case '\b':
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x20) = 0;
  }
  if ((*(int *)(param_1 + 100) == 0) && (*(char *)(param_1 + 0x8d) != '\n')) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x38) + 8);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        iVar2 = FUN_00412384(*(undefined4 **)(param_1 + 0x38),iVar4);
        FUN_0046ee58(iVar2,param_2,param_3);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    puVar1 = *(undefined4 **)(param_1 + 0x60);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,param_2,param_3);
    }
  }
  else if (((param_2 == '\x06') && (*(char *)(param_1 + 0x8d) == '\0')) || (param_2 == '\x04')) {
    *(undefined1 *)(param_1 + 0x8e) = 4;
  }
  return;
}

