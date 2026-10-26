/*
 * FUN_00499a8c at 00499a8c
 * undefined __register FUN_00499a8c(void)
 * Address ranges: 00499a8c-00499ba2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00499a8c(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int in_stack_00000004;
  int local_18;
  byte *local_10;
  undefined4 *local_c;
  
  local_c = *(undefined4 **)(*(int *)(in_stack_00000004 + -8) + 0x440);
  local_10 = *(byte **)(*(int *)(in_stack_00000004 + -4) + 0x440);
  local_18 = 0;
  do {
    bVar2 = *local_10;
    bVar3 = local_10[1];
    pbVar1 = local_10 + 2;
    if (bVar2 == 0) {
      if (bVar3 == 0) {
        local_18 = local_18 + 1;
        local_c = (undefined4 *)
                  (*(int *)(*(int *)(in_stack_00000004 + -8) + 0x440) +
                  *(int *)(*(int *)(in_stack_00000004 + -8) + 0x480) * local_18);
        local_10 = pbVar1;
      }
      else {
        if (bVar3 == 1) {
          return;
        }
        if (bVar3 == 2) {
          local_18 = local_18 + 2;
          local_c = (undefined4 *)
                    (*(int *)(*(int *)(in_stack_00000004 + -8) + 0x440) +
                    *(int *)(*(int *)(in_stack_00000004 + -8) + 0x480) * local_18);
          local_10 = local_10 + 4;
        }
        else {
          FUN_00402944((undefined4 *)pbVar1,local_c,(uint)bVar3);
          local_c = (undefined4 *)((int)local_c + (uint)bVar3);
          local_10 = pbVar1 + bVar3;
        }
      }
    }
    else {
      FUN_00402cfc(local_c,(uint)bVar2,bVar3);
      local_c = (undefined4 *)((int)local_c + (uint)bVar2);
      local_10 = pbVar1;
    }
    local_10 = local_10 + ((uint)local_10 & 1);
  } while( true );
}

