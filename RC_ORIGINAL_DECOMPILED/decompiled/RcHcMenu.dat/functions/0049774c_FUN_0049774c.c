/*
 * FUN_0049774c at 0049774c
 * undefined __register FUN_0049774c(int * param_1, int param_2)
 * Address ranges: 0049774c-0049782c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049774c(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_fffffec0;
  undefined4 **ppuVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  byte local_124 [256];
  undefined4 *local_24;
  undefined4 local_20;
  undefined1 local_1c;
  byte *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_18 = (byte *)0x0;
  puStack_130 = &LAB_0049782d;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*(int *)param_1[1] + 0x78))
                    ((int *)param_1[1],*(undefined4 *)(param_2 + 0xc),&local_10);
  if (cVar1 == '\0') {
    pcVar5 = ".RemoveModel: ";
    pcVar4 = "Not found";
    ppuVar3 = &local_14;
    FUN_00406a48(&PTR_DAT_00497744,(int *)&local_18);
    local_20 = *(undefined4 *)(local_c + 0xc);
    local_1c = 0xb;
    FUN_0040a894(local_18,&local_20,0,(int *)ppuVar3);
    in_stack_fffffec0 = local_14;
    FUN_00402fe0(*local_8,local_124);
    FUN_00403fd4((int *)&local_24,local_124);
    uVar2 = FUN_0045b554((int *)&PTR_FUN_0045b3e0,'\x01',local_24,in_stack_fffffec0,
                         (undefined4 *)pcVar4,(undefined4 *)pcVar5);
    FUN_0040382c(uVar2);
  }
  else {
    (**(code **)(*(int *)local_8[1] + 0x44))((int *)local_8[1],local_10);
  }
  *in_FS_OFFSET = in_stack_fffffec0;
  FUN_00403db0((int *)&local_24);
  FUN_00403dd4((int *)&local_18,2);
  return;
}

