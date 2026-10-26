/*
 * FUN_0046ccd4 at 0046ccd4
 * undefined __register FUN_0046ccd4(int * param_1, int * param_2)
 * Address ranges: 0046ccd4-0046cd4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 25 for TBlobField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 25 for
   TBlobField. Original bytes unchanged; names and types still inferred. */

void FUN_0046ccd4(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_10;
  undefined *local_c;
  undefined1 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_20 = &LAB_0046cd4b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = (&PTR_s_Unknown_00570698)[*(byte *)(param_1 + 0xd)];
  local_8 = 0xb;
  FUN_0040a894(&LAB_0046cd60,&local_c,0,param_2);
  cVar1 = (**(code **)(*param_1 + 0x7c))();
  if (cVar1 == '\0') {
    FUN_004097d0((undefined *)*param_2,(int *)&local_10);
    FUN_00403e04(param_2,local_10);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0046cd52;
  puStack_20 = (undefined1 *)0x46cd4a;
  FUN_00403db0((int *)&local_10);
  return;
}

