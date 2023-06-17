type TodoItemProps = {
  id: string
  title: string
  complete: Boolean
}

export function TodoItem({ id, title, complete }: TodoItemProps) {
  return <li className="flex gap-1 items-center">
    <input id={id} type="checkbox" />
    <label htmlFor={id}></label>
  </li>
}