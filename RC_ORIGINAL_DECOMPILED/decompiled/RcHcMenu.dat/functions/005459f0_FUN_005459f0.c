/*
 * FUN_005459f0 at 005459f0
 * undefined __register FUN_005459f0(int * param_1)
 * Address ranges: 005459f0-00545ac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005459f0(int *param_1)

{
  char cVar1;
  int *in_FS_OFFSET;
  int in_stack_fffffecc;
  int iStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  undefined4 local_11c;
  undefined1 local_118;
  int local_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_114 = 0;
  puStack_124 = &LAB_00545ac4;
  iStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_128;
  local_8 = param_1;
  cVar1 = FUN_00545b80((int)param_1);
  if (cVar1 == '\0') {
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(&local_10,local_110);
    local_11c = *(undefined4 *)(local_8[0xf] + 0xc);
    local_118 = 0xb;
    FUN_0040a894((byte *)
                 "De sortorder-props van sortorder \'%s\' moeten de flag PF_REQUIRED hebben bij TAppObjQueryList"
                 ,&local_11c,0,&local_114);
    in_stack_fffffecc = local_114;
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
  }
  *in_FS_OFFSET = in_stack_fffffecc;
  FUN_00403db0(&local_114);
  FUN_00403dd4(&local_10,2);
  return;
}

