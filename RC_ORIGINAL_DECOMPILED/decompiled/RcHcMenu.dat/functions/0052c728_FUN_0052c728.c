/*
 * FUN_0052c728 at 0052c728
 * undefined __register FUN_0052c728(int * param_1, int * param_2)
 * Address ranges: 0052c728-0052c896
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 10 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 10 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052c728(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  char *in_stack_fffffec4;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 *local_120;
  char *local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_11c = (char *)0x0;
  local_120 = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  puStack_12c = &LAB_0052c897;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    in_stack_fffffec4 = "Bookmark cannot be nil";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    puVar1 = puStack_128;
  }
  puStack_128 = puVar1;
  local_10 = FUN_00403224(local_c,(int)&LAB_0052b8d8);
  if (*(int *)(local_10 + 0x14) == local_8[0x25]) {
    FUN_0052c25c(local_8,*(int *)(local_10 + 0xc));
  }
  else {
    cVar2 = (**(code **)(*local_8 + 0x2c))(local_8,*(undefined4 *)(local_10 + 0x10),1);
    if (cVar2 == '\0') {
      FUN_00406a48((undefined4 *)PTR_PTR_00572588,(int *)&local_11c);
      in_stack_fffffec4 = local_11c;
      FUN_00402fe0(*local_8,local_118);
      FUN_00403fd4((int *)&local_120,local_118);
      uVar3 = FUN_0045b554((int *)&PTR_FUN_00547088,'\x01',local_120,(undefined4 *)in_stack_fffffec4
                           ,(undefined4 *)" Bookmark not valid (anymore)",
                           (undefined4 *)".DoGotoBookmark: ");
      FUN_0040382c(uVar3);
    }
    else {
      *(int *)(local_10 + 0x14) = local_8[0x25];
      *(int *)(local_10 + 0xc) = local_8[0x22];
    }
  }
  *in_FS_OFFSET = in_stack_fffffec4;
  FUN_00403dd4((int *)&local_120,2);
  FUN_00403dd4(&local_18,2);
  return;
}

