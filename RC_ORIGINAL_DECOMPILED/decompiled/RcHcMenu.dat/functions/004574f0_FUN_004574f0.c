/*
 * FUN_004574f0 at 004574f0
 * undefined __register FUN_004574f0(undefined4 param_1)
 * Address ranges: 004574f0-00457522;00457543-004575c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004574f0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_ffffffd8;
  char *pcVar2;
  char *pcVar3;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_10;
  undefined1 local_9;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_18 = &LAB_004575c7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_9 = 1;
  local_8 = param_1;
  switch(param_1) {
  case 0:
    pcVar3 = "WindowsToDaviMsgResult: ";
    pcVar2 = "Not enough memory to create message box.";
    puStack_14 = &stack0xfffffffc;
    FUN_00406a48(&PTR_DAT_004574e8,(int *)&local_10);
    in_stack_ffffffd8 = local_10;
    uVar1 = FUN_0045b554((int *)&PTR_FUN_0045b3e0,'\x01',(undefined4 *)0x0,local_10,
                         (undefined4 *)pcVar2,(undefined4 *)pcVar3);
    FUN_0040382c(uVar1);
    break;
  case 1:
    local_9 = 4;
    puStack_14 = &stack0xfffffffc;
    break;
  case 2:
    local_9 = 1;
    puStack_14 = &stack0xfffffffc;
    break;
  case 3:
    local_9 = 0;
    puStack_14 = &stack0xfffffffc;
    break;
  case 4:
    local_9 = 5;
    puStack_14 = &stack0xfffffffc;
    break;
  case 5:
    local_9 = 2;
    puStack_14 = &stack0xfffffffc;
    break;
  case 6:
    local_9 = 6;
    puStack_14 = &stack0xfffffffc;
    break;
  case 7:
    local_9 = 3;
    puStack_14 = &stack0xfffffffc;
    break;
  default:
    FUN_00403d94("WindowsToDaviMsgResult:  Unhandled case-part");
  }
  *in_FS_OFFSET = in_stack_ffffffd8;
  FUN_00403db0((int *)&local_10);
  return;
}

