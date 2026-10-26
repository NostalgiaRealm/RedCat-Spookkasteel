/*
 * FUN_0048eaf4 at 0048eaf4
 * undefined __register FUN_0048eaf4(int * param_1, byte * param_2)
 * Address ranges: 0048eaf4-0048ebe3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048eaf4(int *param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_fffffea8;
  char *pcVar5;
  char *pcVar6;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  byte local_140 [256];
  undefined4 *local_40;
  undefined4 *local_3c;
  byte local_38 [28];
  int local_1c;
  char local_15;
  int local_14;
  int local_10;
  byte *local_c;
  int *local_8;
  
  puStack_144 = &stack0xfffffffc;
  local_3c = (undefined4 *)0x0;
  local_40 = (undefined4 *)0x0;
  puStack_148 = &LAB_0048ebe4;
  uStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14c;
  local_15 = '\0';
  local_10 = -1;
  local_c = param_2;
  local_8 = param_1;
  iVar2 = FUN_0048ec24((int)param_1);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_1c = uVar3 + 1;
    local_14 = 0;
    do {
      FUN_0048f02c(local_8,local_14,(undefined4 *)local_38);
      cVar1 = FUN_0048d3ac(local_38,local_c);
      if (cVar1 != '\0') {
        local_10 = local_14;
        local_15 = '\x01';
        break;
      }
      local_14 = local_14 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  if (local_15 == '\0') {
    pcVar6 = ".IndexOf: ";
    pcVar5 = "PropRef not found";
    FUN_00406a48(&PTR_DAT_0048eaec,(int *)&local_3c);
    in_stack_fffffea8 = local_3c;
    FUN_00402fe0(*local_8,local_140);
    FUN_00403fd4((int *)&local_40,local_140);
    uVar4 = FUN_0045b554((int *)&PTR_FUN_0045b3e0,'\x01',local_40,in_stack_fffffea8,
                         (undefined4 *)pcVar5,(undefined4 *)pcVar6);
    FUN_0040382c(uVar4);
  }
  *in_FS_OFFSET = in_stack_fffffea8;
  FUN_00403dd4((int *)&local_40,2);
  return;
}

