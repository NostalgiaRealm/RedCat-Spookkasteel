/*
 * FUN_0055a7fc at 0055a7fc
 * undefined __register FUN_0055a7fc(int * param_1, undefined4 param_2, ushort * param_3)
 * Address ranges: 0055a7fc-0055a99e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0055a7fc(int *param_1,undefined4 param_2,ushort *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint *local_10;
  ushort *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = (uint *)0x0;
  puStack_20 = &LAB_0055a99f;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_3;
  local_8 = param_1;
  if (*param_3 == 0x1b) {
    puStack_1c = &stack0xfffffffc;
    FUN_0055aac8(param_1);
  }
  else {
    FUN_00550bf8(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),(uint)*param_3,
                 (int *)&local_10);
    if (((char)local_8[0xd4] == '\x01') || ((char)local_8[0xd4] == '\x02')) {
      if (local_10 == (uint *)0x0) {
        FUN_0040d7b0();
        FUN_0043262c((int *)local_8[0xcb],0,extraout_ECX);
        FUN_00554d74();
        FUN_00432744(local_8[0xcb],(uint *)0x0);
        FUN_0043262c((int *)local_8[0xcb],CONCAT31((int3)((uint)extraout_EDX >> 8),1),
                     extraout_ECX_00);
      }
      else {
        uVar2 = FUN_0055a71c((int)local_8,(uint)*local_c);
        if ((char)uVar2 == '\0') {
          FUN_00432744(local_8[0xd5],local_10);
          (**(code **)(*(int *)local_8[0xd5] + 0x5c))((int *)local_8[0xd5],1);
          FUN_00432744(local_8[0xcb],(uint *)0x0);
          if ((char)local_8[0xd4] == '\x02') {
            cVar1 = FUN_0055a9b0((int)local_8,local_8 + 0xd5);
            if (cVar1 == '\0') {
              FUN_0055a384(local_8,0);
            }
            else {
              FUN_0055a384(local_8,2);
              FUN_0055a280((int)local_8);
              FUN_0055a1a8((int)local_8);
            }
          }
          else {
            FUN_0055a384(local_8,0);
          }
        }
        else {
          FUN_0040d7b0();
          FUN_0043262c((int *)local_8[0xcb],0,extraout_ECX_01);
          FUN_00554ebc();
          FUN_00432744(local_8[0xcb],(uint *)0x0);
          FUN_0043262c((int *)local_8[0xcb],CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),
                       extraout_ECX_02);
        }
      }
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0055a9a6;
  puStack_20 = (undefined1 *)0x55a99e;
  FUN_00403db0((int *)&local_10);
  return;
}

