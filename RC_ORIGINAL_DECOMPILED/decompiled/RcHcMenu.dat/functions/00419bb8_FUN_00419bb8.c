/*
 * FUN_00419bb8 at 00419bb8
 * undefined __register FUN_00419bb8(void)
 * Address ranges: 00419bb8-00419d53;00419d76-00419d8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x411144 slot 4 for TStreamAdapter. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x411144 slot 4 for
   TStreamAdapter. Original bytes unchanged; names and types still inferred. */

void FUN_00419bb8(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  int in_stack_00000004;
  int *in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  uint *in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  uint local_1c;
  uint local_18;
  uint local_10;
  int local_8;
  
  puStack_3c = (undefined1 *)0x419bc9;
  FUN_00406b00(in_stack_00000008);
  puStack_40 = &LAB_00419d8c;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_1c = 0;
  local_18 = 0;
  puStack_4c = &LAB_00419d65;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  if (in_stack_00000010 == 0) {
    if (in_stack_0000000c < 0x100001) {
LAB_00419c22:
      local_10 = in_stack_0000000c;
      goto LAB_00419c28;
    }
  }
  else if (in_stack_00000010 < 1) goto LAB_00419c22;
  local_10 = 0x100000;
LAB_00419c28:
  puStack_54 = (undefined1 *)0x419c30;
  puStack_48 = &stack0xfffffffc;
  puStack_3c = &stack0xfffffffc;
  iVar2 = FUN_004027e8(local_10);
  puStack_58 = &LAB_00419d54;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_54 = &stack0xfffffffc;
  do {
    if (in_stack_00000010 == 0) {
      if (in_stack_0000000c == 0) {
LAB_00419d14:
        *in_FS_OFFSET = uStack_5c;
        puStack_54 = &DAT_00419d5b;
        puStack_58 = (undefined1 *)0x419d29;
        FUN_00402800(iVar2);
        if (in_stack_00000018 != (undefined4 *)0x0) {
          *in_stack_00000018 = 0;
          in_stack_00000018[1] = 0;
        }
        if (in_stack_00000014 != (uint *)0x0) {
          *in_stack_00000014 = local_1c;
          in_stack_00000014[1] = local_18;
        }
        return;
      }
    }
    else if (in_stack_00000010 < 1) goto LAB_00419d14;
    uVar1 = in_stack_0000000c;
    if (in_stack_00000010 == 0) {
      if (0x7fffffff < in_stack_0000000c) {
LAB_00419c59:
        uVar1 = 0x7fffffff;
      }
    }
    else if (0 < in_stack_00000010) goto LAB_00419c59;
    for (; 0 < (int)uVar1; uVar1 = uVar1 - uVar4) {
      uVar4 = uVar1;
      if ((int)local_10 < (int)uVar1) {
        uVar4 = local_10;
      }
      uVar3 = (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 4))
                        (*(int **)(in_stack_00000004 + 0xc),iVar2,uVar4);
      bVar5 = CARRY4(local_1c,uVar3);
      local_1c = local_1c + uVar3;
      local_18 = local_18 + ((int)uVar3 >> 0x1f) + (uint)bVar5;
      local_8 = (**(code **)(*in_stack_00000008 + 0x10))();
      if ((local_8 == 0) && (uVar4 != 0)) {
        local_8 = -0x7fffbffb;
      }
      if (local_8 != 0) {
        FUN_004038cc();
        *in_FS_OFFSET = uStack_50;
        *in_FS_OFFSET = uStack_44;
        puStack_3c = &LAB_00419d93;
        puStack_40 = (undefined1 *)0x419d8b;
        FUN_00406aa0((int *)&stack0x00000008);
        return;
      }
    }
    bVar5 = in_stack_0000000c < uVar1;
    in_stack_0000000c = in_stack_0000000c - uVar1;
    in_stack_00000010 = (in_stack_00000010 - ((int)uVar1 >> 0x1f)) - (uint)bVar5;
  } while( true );
}

