/*
 * FUN_004e4340 at 004e4340
 * undefined __register FUN_004e4340(int * param_1, int * param_2)
 * Address ranges: 004e4340-004e44e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 10 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 10 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

void FUN_004e4340(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcVar4;
  char *in_stack_fffffeb8;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined4 *local_12c;
  char *local_128;
  char *local_124;
  undefined1 local_120;
  byte local_11c [256];
  int local_1c;
  byte *local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_134 = &stack0xfffffffc;
  local_128 = (char *)0x0;
  local_12c = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = (byte *)0x0;
  local_1c = 0;
  puStack_138 = &LAB_004e44e2;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    FUN_00402fe0(*param_1,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    in_stack_fffffeb8 = ".DoGotoBookmark: ";
    pcVar4 = " Parameter \'%s\' cannot be nil";
    FUN_004040f0((int *)&local_18,3);
    local_124 = "aBookmark";
    local_120 = 0xb;
    FUN_0040a894(local_18,&local_124,0,(int *)pcVar4);
    FUN_00403d94(local_14);
    puVar1 = puStack_134;
  }
  puStack_134 = puVar1;
  local_10 = FUN_00403224(local_c,(int)&DAT_004e31fc);
  if (*(int *)(local_10 + 0x14) == local_8[0x32]) {
    FUN_004e3fa0(local_8,*(int *)(local_10 + 0xc));
    FUN_0054a2b0(local_8);
  }
  else {
    cVar2 = (**(code **)(*local_8 + 0x2c))(local_8,*(undefined4 *)(local_10 + 0x10),1);
    if (cVar2 == '\0') {
      pcVar4 = ".DoGotoBookmark: ";
      FUN_00406a48((undefined4 *)PTR_PTR_00572588,(int *)&local_128);
      in_stack_fffffeb8 = local_128;
      FUN_00402fe0(*local_8,local_11c);
      FUN_00403fd4((int *)&local_12c,local_11c);
      uVar3 = FUN_0045b554((int *)&PTR_FUN_00547088,'\x01',local_12c,(undefined4 *)in_stack_fffffeb8
                           ,(undefined4 *)" Bookmark not valid (anymore)",(undefined4 *)pcVar4);
      FUN_0040382c(uVar3);
    }
    else {
      *(int *)(local_10 + 0x14) = local_8[0x32];
      *(int *)(local_10 + 0xc) = local_8[0x22];
    }
  }
  *in_FS_OFFSET = in_stack_fffffeb8;
  FUN_00403dd4((int *)&local_12c,2);
  FUN_00403dd4(&local_1c,3);
  return;
}

