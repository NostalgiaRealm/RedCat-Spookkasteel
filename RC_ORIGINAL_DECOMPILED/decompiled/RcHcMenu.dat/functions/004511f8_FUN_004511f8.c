/*
 * FUN_004511f8 at 004511f8
 * undefined __register FUN_004511f8(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 004511f8-00451218
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004511f8(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  tagMSG tStack_20;
  
  uVar1 = FUN_00451148(param_1,&tStack_20,param_3);
  if ((char)uVar1 == '\0') {
    FUN_0045198c(param_1);
  }
  return;
}

