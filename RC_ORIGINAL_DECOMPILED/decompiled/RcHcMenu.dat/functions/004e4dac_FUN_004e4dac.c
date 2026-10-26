/*
 * FUN_004e4dac at 004e4dac
 * undefined __register FUN_004e4dac(int * param_1, undefined1 param_2)
 * Address ranges: 004e4dac-004e4e38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 17 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 17 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

void FUN_004e4dac(int *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  undefined4 *local_14;
  undefined4 *local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  puStack_11c = &LAB_004e4e39;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  pcVar4 = "DoDeleteRecursively";
  pcVar3 = " Functionality is not supported\r\nThis can be implemented, let the Carthago-team know";
  local_9 = param_2;
  local_8 = param_1;
  FUN_00406a48(DAT_0057254c,(int *)&local_10);
  puVar2 = local_10;
  FUN_00402fe0(*local_8,local_114);
  FUN_00403fd4((int *)&local_14,local_114);
  uVar1 = FUN_0045b554((int *)&DAT_0054702c,'\x01',local_14,puVar2,(undefined4 *)pcVar3,
                       (undefined4 *)pcVar4);
  FUN_0040382c(uVar1);
  *in_FS_OFFSET = puVar2;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

