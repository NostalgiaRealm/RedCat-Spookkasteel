/*
 * FUN_00566d54 at 00566d54
 * undefined __register FUN_00566d54(int param_1, int * param_2)
 * Address ranges: 00566d54-00566f46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00566d54(int param_1,int *param_2)

{
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x01') {
    (**(code **)(*param_2 + 0x30))
              (param_2,"PLAYER","Health",(double)*(int *)(*(int *)(param_1 + 0xc) + 0x18));
    (**(code **)(*param_2 + 0x30))
              (param_2,"PLAYER","MaxHealth",(double)*(int *)(*(int *)(param_1 + 0xc) + 0x18));
    (**(code **)(*param_2 + 0xc))
              (param_2,"PLAYER",&DAT_00566f84,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14));
    (**(code **)(*param_2 + 0xc))
              (param_2,"PLAYER","Skill",*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x28));
    (**(code **)(*param_2 + 0xc))
              (param_2,"PLAYER","MirrorPart",*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20));
    (**(code **)(*param_2 + 0xc))
              (param_2,"PLAYER","MagicPotion",*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c));
    (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","Score",0);
    (**(code **)(*param_2 + 0xc))
              (param_2,"PLAYER","TotalScore",*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x24));
  }
  else {
    (**(code **)(*param_2 + 0x30))
              (param_2,"PLAYER","Health",(double)*(int *)(*(int *)(param_1 + 0xc) + 0x18));
    (**(code **)(*param_2 + 0x30))
              (param_2,"PLAYER","MaxHealth",(double)*(int *)(*(int *)(param_1 + 0xc) + 0x18));
    (**(code **)(*param_2 + 0xc))
              (param_2,"PLAYER",&DAT_00566f84,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14));
    (**(code **)(*param_2 + 0xc))
              (param_2,"PLAYER","Skill",*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x28));
    (**(code **)(*param_2 + 0xc))
              (param_2,"PLAYER","MirrorPart",*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20));
    (**(code **)(*param_2 + 0xc))
              (param_2,"PLAYER","MagicPotion",*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c));
    (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","Score",0);
    (**(code **)(*param_2 + 0xc))
              (param_2,"PLAYER","TotalScore",*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x24));
  }
  return;
}

