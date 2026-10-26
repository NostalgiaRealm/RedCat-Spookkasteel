/*
 * FUN_0052d474 at 0052d474
 * undefined __register FUN_0052d474(int * param_1)
 * Address ranges: 0052d474-0052d591
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 18 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 18 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052d474(int *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_128;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_118 = &LAB_0052d592;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0x22] != param_1[0x23]) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    pcStack_128 = " Cancel-operation not at edit/insert-row";
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
    puVar1 = puStack_114;
  }
  puStack_114 = puVar1;
  if ((char)local_8[0x10] == '\0') {
    if ((char)local_8[4] == '\0') {
      FUN_0052c528(local_8,local_8[0x22]);
    }
  }
  else if ((char)local_8[0x10] == '\x01') {
    piVar2 = (int *)FUN_004e25c4((int *)local_8[0x20],local_8[0x22]);
    FUN_00493768(piVar2,(int *)local_8[0xc]);
    FUN_004e25a0((int *)local_8[0x20],local_8[0x22],0);
  }
  else {
    FUN_00403d94("Assertion failure");
  }
  FUN_0054a2b0(local_8);
  *in_FS_OFFSET = pcStack_128;
  FUN_00403dd4(&local_10,2);
  return;
}

